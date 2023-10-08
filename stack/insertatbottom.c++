#include <iostream>
#include <stack>
using namespace std;
void InsertAtBottom(stack<int> &s, int d){
    stack<int> temp;
    while(not s.empty()){
        int cur=s.top();
        temp.push(cur);
        s.pop();
    }
    s.push(d);
    while(not temp.empty()){
        int cur=temp.top();
        s.push(cur);
        temp.pop();
    }
}

void rec(stack<int> &s, int data){
    if(s.empty()){
        s.push(data);
        return;
    }
    int cur=s.top();
    s.pop();
    rec(s,data);
    s.push(cur);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    InsertAtBottom(st,10);
    //rec(st,6);
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}