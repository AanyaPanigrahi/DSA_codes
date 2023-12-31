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

class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head=NULL;
    }

    void insertAtTail(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void display(){
        cout<<endl;
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

void reversePrint(Node* head){
    if(head==NULL){
        return;
    }
    reversePrint(head->next);
    cout<<head->val<<" ";
}

Node* reverse(Node* &head){
    Node* prevptr=NULL;
    Node* currptr=head;
    while(currptr!=NULL){
        Node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    Node* new_head=prevptr;
    return new_head;
}

Node* reverseRecur(Node* &head){
    if(head==0||head->next==0){
        return head;
    }
    Node* new_node=reverseRecur(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_node;
}

Node* revKnodes(Node* &head, int k){
    Node* prevptr=NULL;
    Node* currptr=head;
    int counter=1;
    while(currptr!=NULL && counter<=k){
        Node* nextptr= currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        counter++;
    }
    if(currptr!=NULL){
        Node* new_head=revKnodes(currptr,k);
        head->next=new_head;
    }
    return prevptr;
}

int main(){
    LinkedList L;
    L.insertAtTail(1);
    L.insertAtTail(2);
    L.insertAtTail(3);
    L.insertAtTail(4);
    L.insertAtTail(5);
    L.display();
    reversePrint(L.head);
    L.head=reverseRecur(L.head);
    L.display(); 
    revKnodes(L.head,2);
    L.display();

}