//dequeue -> doubl ended
#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_front(5);
    dq.pop_back();
    dq.pop_front();
    while(not dq.empty()){
        cout<<dq.front();
        dq.pop_front();
    }
}