#include <iostream>
#include <stack>
using namespace std;

void remFromBottom(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){
        int cur=input.top();
        input.pop();
        temp.push(cur);
    }
    temp.pop();
    while(not temp.empty()){
        int val=temp.top();
        temp.pop();
        input.push(val);
    }
}

void recRFB(stack<int> &input){
    if(input.size()==1){
        input.pop();
        return;
    }
    int cur=input.top();
    input.pop();
    recRFB(input);
    input.push(cur);
}

void remFromIdx(stack<int> &input, int idx){
    stack<int> temp;
    int i=0;
    while(i<input.size()-idx){
        int cur=input.top();
        input.pop();
        temp.push(cur);
    }
    temp.pop();
    while(not temp.empty()){
        int val=temp.top();
        temp.pop();
        input.push(val);
    }
}

void recRFI(stack<int> &input, int idx){
    if(input.size()==idx+1){
        input.pop();
        return;
    }
    int curr=input.top();
    input.pop();
    recRFI(input,idx);
    input.push(curr);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    //remFromBottom(st);
    //recRFB(st);
    //remFromIdx(st,1);
    recRFI(st,1);
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}