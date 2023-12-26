#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* new_node= new Node(val);
    new_node->next=head;
    head=new_node;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
} 

void deleteAtHead(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);
}

void deleteAtTail(Node* &head){
    Node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    Node* temp=second_last->next;
    second_last->next=NULL;
    free(temp);
}

void deleteAtPos(Node* &head, int pos){
    int cur=1;
    Node* temp=head;
    while(cur!=pos-1){
        temp=temp->next;
        cur++;
    }
    Node* tempo=temp->next;
    temp->next=temp->next->next;
    free(tempo);
}

int main(){
    Node* head=NULL;
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    insertAtHead(head,6);
    insertAtHead(head,7);
    display(head);
    deleteAtPos(head,3);
    display(head);
}