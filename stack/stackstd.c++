#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.empty()<<"\n";
    st.push(1);
    st.push(2);
    st.push(6);
    cout<<st.top()<<"\n";
    st.push(8);
    st.push(4);
    cout<<st.size()<<"\n";
    st.pop();
    cout<<st.size()<<"\n";
    cout<<st.empty()<<"\n";

}