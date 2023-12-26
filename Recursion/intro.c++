#include <iostream>
using namespace std;

int fact(int n){
    // time : O(N)
    // space : O(N)
    if(n==1) return 1;
    return n*fact(n-1);
}

int fibo(int n){
    // time : O(2^N)
    // space : O(N)
    if(n==0 || n==1) return n;
    return fibo(n-1) + fibo(n-2);
}

int sum(int n){
    // time : O(digits)
    // space : O(d)
    if(n<10) return n;
    int res=n%10 + sum(n/10);
}

int power(int p, int q){
    //p^q
    // time : O(q)
    // space : O(q)
    if(q==0) return 1;
    return p*power(p,q-1);
}

int recursivePow(int p,int q){
    // time : O(log q)
    // space : O(log q)
    if(q==0) return 1;
    if(q%2==0){
        //even
        int result = recursivePow(p, q/2);
        return result * result;
    }else{
        int result = recursivePow(p, q/2);
        return p*result*result;
    }
}
int main(){
    int result=fact(5);
    cout<<result<<endl;
    cout<<fibo(5)<<endl;
    cout<<sum(12345)<<endl;
    cout<<power(2,3)<<endl;
    cout<<power(2,0)<<endl;
    cout<<recursivePow(2,3)<<endl;
    cout<<recursivePow(2,4)<<endl;
}