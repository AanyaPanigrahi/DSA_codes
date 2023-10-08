#include <iostream>
#include <stack>
using namespace std;

void idx(stack<int> &input, int idx, int data){
    stack<int> temp;
    int size=input.size();
    int i=0;
    while(i<(size-idx)){
        int cur=input.top();
        input.pop();
        temp.push(cur);
        i++;
    }
    input.push(data);
    while(not temp.empty()){
        int cur=temp.top();
        temp.pop();
        input.push(cur);
    }
}

void rec(stack<int> &input, int idx, int data){
    if(input.size()==idx){
        input.push(data);
        return;
    }
    int cur=input.top();
    input.pop();
    rec(input,idx,data);
    input.push(cur);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    //idx(st,1,10);
    rec(st,1,10);
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}