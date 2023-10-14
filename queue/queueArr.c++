#include <iostream>
#include <vector>
using namespace std;
class Queue{
    int front,back;
    vector<int> v;
    public:
    Queue(){
        this->back=-1;
        this->front=-1;
    }
    void enqueue(int data){
        this->v.push_back(data);
        this->back++;
        if (this->back==0) this->front=0;
    }
    void dequeue(){
        if(this->front==this->back){
            this->front=-1;
            this->back=-1;
            this->v.clear();
        }
        else{
            this->front++;
        }
    }
    int getFront(){
        if(this->front==-1) return -1;
        else{
            return v[this->front];
        }
    }
    bool isEmpty(){
        return this->front==-1;
    }
};
int main(){
    Queue qu;
    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);
    qu.dequeue();
    qu.enqueue(4);
    while(not qu.isEmpty()){
        cout<<qu.getFront()<<endl;
        qu.dequeue();
    }
}