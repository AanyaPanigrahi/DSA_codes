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
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

//deletion of alternate nodes
void deleteAlternate(Node* &head){
    Node* current=head;
    while(current!=NULL && current->next!=NULL){
    Node* temp=current->next;
    current->next=current->next->next;
    free(temp);
    current=current->next;
    }
}

//deleting duplicate nodes
void deleteDuplicate(Node* &head){
    Node* current=head;
    while(current!=NULL){
        while(current->next!=NULL && current->val==current->next->val){
            Node*temp=current->next;
            current->next=current->next->next;
            free(temp);
        }
        current=current->next;
    }
}

int main(){
    LinkedList L;
    L.insertAtTail(1);
    L.insertAtTail(2);
    L.insertAtTail(3);
    L.insertAtTail(4);
    L.insertAtTail(5);
    L.display();
    deleteAlternate(L.head);
    L.display();

    LinkedList L2;
    L2.insertAtTail(1);
    L2.insertAtTail(2);
    L2.insertAtTail(2);
    L2.insertAtTail(4);
    L2.insertAtTail(4);
    L2.display();
    deleteDuplicate(L2.head);
    L2.display();

}