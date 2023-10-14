#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
    queue<int> qu;
    stack<int> st;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    while(not qu.empty()){
        st.push(qu.front());
        qu.pop();
    }
    while(not st.empty()){
        qu.push(st.top());
        st.pop();
    }
    while(not qu.empty()){
        cout<<qu.front()<<endl;
        qu.pop();
    }
    }