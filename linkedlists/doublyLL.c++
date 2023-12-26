#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};

class doubly{
    public:
    Node* head;
    Node* tail;
    doubly(){
        head=NULL;
        tail=NULL;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<endl;
    }

    void insertAtHead(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }

    void insertAtTail(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            insertAtHead(val);
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
    }

    void insertAtPos(int val,int k){
        Node* temp=head;
        Node* new_node=new Node(val);
        int count=1;
        while(count!=k-1){
            temp=temp->next;
            count++;
        }
        Node* next=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next=next;
        next->prev=new_node;
        return;

    }
};

int main(){
    Node* new_node=new Node(4);
    doubly dll;
    dll.head=new_node;
    dll.tail=new_node;
    dll.display();
    dll.insertAtHead(3);
    dll.insertAtHead(2);
    dll.insertAtHead(1);
    dll.display();
    dll.insertAtTail(5);
    dll.display();
    dll.insertAtPos(8,3);
    dll.display();
}