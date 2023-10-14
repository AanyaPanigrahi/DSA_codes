#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;
    int size;
    public:
    Queue(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }
    void enqueue(int data){
        Node* newNode= new Node(data);
        if(this->head==NULL){
            this->head=this->tail=newNode;
        }
        else{
            this->tail->next=newNode;
            this->tail=newNode;
        }
        size++;
    }
    void dequeue(){
        if(this->head==NULL){
            return;
        }
        else{
            Node* oldHead=this->head;
            Node* newHead=this->head->next;
            this->head=newHead;
            if(this->head==NULL){
                this->tail=NULL;
            }
            oldHead->next=NULL;
            delete oldHead;
        }
        this->size--;
    }

    int getsize(){
        return this->size;
    }

    bool isEmpty(){
        return this->head==NULL;
    }

    void display(){
        while(this->head!=NULL){
        cout<<this->head->data<<endl;
        this->head=this->head->next;       
    }
    }

    int front(){
        if(this->head==NULL) return -1;
        else{
            return this->head->data;
        }
    }
};

int main(){
    Queue qu;
    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);
    qu.dequeue();
    qu.enqueue(4);
    //qu.display();
    while(not qu.isEmpty()){
        cout<<qu.front()<<endl;
        qu.dequeue();
    }
}