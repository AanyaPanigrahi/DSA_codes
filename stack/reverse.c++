#include <iostream>
#include <stack>
using namespace std;

// Time : O(N)
// Space : O(N)
void reverse(stack<int> &input){
    stack <int> temp1;
    while(not input.empty()){
        int cur=input.top();
        temp1.push(cur);
        input.pop();
    }
    stack <int> temp2;
    while(not temp1.empty()){
        int cur=temp1.top();
        temp2.push(cur);
        temp1.pop();
    }
    while(not temp2.empty()){
        int cur=temp2.top();
        input.push(cur);
        temp2.pop();
    }
}

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

// Time : O(N^2)
// Space : O(N)
void rec(stack<int> &input){
    if(input.empty()){
        return;
    }
    int cur=input.top();
    input.pop();
    rec(input);
    InsertAtBottom(input,cur);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    //reverse(st);
    rec(st);
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}