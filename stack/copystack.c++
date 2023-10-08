#include <iostream>
#include <stack>
using namespace std;
stack<int> copystack(stack<int> &inputstack){
    stack<int> temp;
    while(not inputstack.empty()){
        int cur= inputstack.top();
        temp.push(cur);
        inputstack.pop();
    }
    stack<int> res;
    while(not temp.empty()){
        int val=temp.top();
        res.push(val);
        temp.pop();
    }
    return res;
}

//using recursion
void copys(stack <int> &inputstack, stack<int> &output){
    if(inputstack.empty()){
        return;
    }
    int cur=inputstack.top();
    inputstack.pop();
    copys(inputstack, output);
    output.push(cur);
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    //stack<int> result=copystack(st);

    stack<int> ans;
    copys(st,ans);

    /*
    while(not result.empty()){
        cout<<result.top()<<endl;
        result.pop();
    }
    */

    while(not ans.empty()){
        cout<<ans.top()<<endl;
        ans.pop();
    }

    return 0;
}