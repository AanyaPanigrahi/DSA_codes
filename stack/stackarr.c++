#include <iostream>
using namespace std;
class Stack{

    int capacity;
    int *arr;
    int top;

    public:

    Stack(int c){
        this->capacity=c;
        arr=new int[c];
        this->top=-1;
    }

    void push(int data){
        if(this->top==this->capacity-1){
            cout<<"overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top]=data;
    }

    int pop(){
        if(this->top==-1){
            cout<<"underflow\n";
            return INT16_MIN;
        }
        this->top--;
    }

    int Top(){
        if(this->top==-1){
            cout<<"underflow\n";
            return INT8_MIN;
        }
        return this->arr[this->top];     
    }

    bool isEmpty(){
        return this->top==-1;
    }

    bool isFull(){
        return this->top==this->capacity-1;
    }

    int size(){
        return this->top+1;
    }
};

int main(){
    Stack st(5);
    cout<<st.isEmpty()<<"\n";
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.isEmpty()<<"\n";
    cout<<st.Top()<<"\n";
    st.pop();
    cout<<st.Top()<<"\n";
    st.push(6);
    st.push(7);
    cout<<st.size()<<"\n";
    cout<<st.isFull()<<"\n";
    st.push(8);
    cout<<st.Top()<<"\n";
    cout<<st.isFull()<<"\n";

}