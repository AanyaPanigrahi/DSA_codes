#include <iostream>
#include <stack>
using namespace std;
class queue{
    stack<int> st;
    public:
    queue(){};

    //PUSH EFFICIENT
    /*

    //enqueue
    void push(int data){
        //Time : O(1)
        st.push(data);
    }
    //dequeue
    void pop(){
        //Time : O(N)
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }

    void front(){
        //Time : O(N)
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        int res=st.top();
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return res;
    }

    */

    //POP EFFICIENT 
    void push(int data){ //insertAtBottom
        //Time : O(N)
        stack<int> temp;
        while(not st.empty()){
            temp.push(st.top());
            st.pop();                
        }
        st.push(data);
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }

    void pop(){
        //Time : O(1)
        if(st.empty()) return;
        st.pop();
    }

    int front(){
        //Time : O(1)
        if(st.empty()) return INT16_MIN;
        return st.top();
    }

    bool empty(){
        return st.empty();
    }
};

int main(){
    queue Qu;
    Qu.push(10);
    Qu.push(20);
    Qu.push(30);
    Qu.push(40);
    Qu.pop();
    while(not Qu.empty()){
        cout<<Qu.front()<<endl;
        Qu.pop(); 
    }
}