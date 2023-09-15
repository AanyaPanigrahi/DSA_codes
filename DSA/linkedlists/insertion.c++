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

void insertAtTail(Node* &head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=NULL;
}

void insertAtPos(Node* &head, int val, int pos){
    Node* new_node=new Node(val);
    if(pos==0){
        insertAtHead(head,val);
    }
    int currentPos=1;
    Node* temp=head;
    while(currentPos!=pos-1){
        temp=temp->next;
        currentPos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    
}

void updationAtPos(Node* &head,int val,int pos){
    int currentP=0;
    Node* temp=head;
    while(currentP!=pos){
        temp=temp->next;
        currentP++;
    }
    temp->val=val;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,4);
    display(head);
    insertAtPos(head,5,2);
    display(head);
    updationAtPos(head,3,2);
    display(head);
}