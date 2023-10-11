#include <iostream>
#include <stack>
#include <string.h>
#include <math.h>
using namespace std;
int calc(int v1, int v2, char op){
    if(op=='^'){
        return pow(v1,v2);
    }
    else if(op=='+'){
        return v1+v2;
    }
    else if(op=='-'){
        return v1-v2;
    }
    else if(op=='*'){
        return v1*v2;
    }
    else if(op=='/'){
        return v1/v2;
    }
    else if(op=='%'){
        return v1%v2;
    }
}

int prec(char ch){
    if(ch=='^') return 3;
    else if(ch=='/' or ch=='*') return 2;
    else if(ch=='-' or ch=='+') return 1;
    else return -1;
}

int eval(string &s){
    stack<char> ops;
    stack<int> nums;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            nums.push(s[i]-'0');
        }
        else if(s[i]=='('){
            ops.push('(');
        }
        else if(s[i]==')'){
            while(not ops.empty() and ops.top()!='('){
                char op=ops.top();
                ops.pop();
                int v2=nums.top();
                nums.pop();
                int v1=nums.top();
                nums.pop();
                nums.push(calc(v1,v2,op));
            }
            if(not ops.empty()) ops.pop();
        }
        else{
            while(not ops.empty() and prec(ops.top())>=prec(s[i])){
                char op=ops.top();
                ops.pop();
                int v2=nums.top();
                nums.pop();
                int v1=nums.top();
                nums.pop();
                nums.push(calc(v1,v2,op));
            }
            ops.push(s[i]);
        }
    }
    while(not ops.empty()){
        char op=ops.top();
        ops.pop();
        int v2=nums.top();
        nums.pop();
        int v1=nums.top();
        nums.pop();
        nums.push(calc(v1,v2,op));
    }
    return nums.top();
}

int main(){
    string s="1+(2*(3-1))+2";
    cout<<eval(s);
}
