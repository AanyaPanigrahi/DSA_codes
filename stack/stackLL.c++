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

class Stack{

    Node* head;
    int capacity;
    int curSize;

    public:
    Stack(int c){
        this->capacity=c;
        this->curSize=0;
        head=NULL;
    }

    bool isEmpty(){
        return this->head==NULL;
    }

    bool isFull(){
        return this->curSize==this->capacity;
    }

    void push(int data){
        if(this->curSize==this->capacity){
            cout<<"overflow\n";
            return;
        }
        Node* new_node= new Node(data);
        new_node->next=this->head;
        this->head=new_node;
        this->curSize++;
    }

    int pop(){
        if(this->curSize==0){
            cout<<"underflow\n";
            return INT16_MIN;
        }
        Node* new_head=this->head->next;
        this->head->next=NULL;
        Node* tobedeleted=this->head;
        int result=tobedeleted->data;
        delete tobedeleted;
        this->head=new_head;
        return result;
        this->curSize--;
    }

    int size(){
        return this->curSize;
    }

    int Top(){
        if(this->curSize==0){
            cout<<"underflow\n";
            return INT16_MIN;
        }
        return this->head->data;      
    }
};

int main(){
    Stack st(10);
    cout<<st.isEmpty()<<"\n";
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.isEmpty()<<"\n";
    cout<<st.Top()<<"\n";
    cout<<st.pop()<<"\n";
    cout<<st.Top()<<"\n";
    st.push(6);
    st.push(7);
    cout<<st.size()<<"\n";
    cout<<st.isFull()<<"\n";
    st.push(8);
    cout<<st.Top()<<"\n";
    cout<<st.isFull()<<"\n";

}