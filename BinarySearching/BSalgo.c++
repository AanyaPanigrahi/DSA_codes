#include <iostream>
#include <vector>
using namespace std;
int binarySearching(vector<int> &input, int target){
    int lo=0;
    int n=input.size();
    int hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(input[mid]==target) return mid;
        else if(input[mid]<target){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return -1;
}
int main(){
    int sz;
    cout<<"enter size: ";
    cin>>sz;
    vector<int> input(sz);
    cout<<"vector elements: ";
    for(int i=0; i<sz; i++){
        cin>>input[i];
    }
    int target;
    cout<<"target : ";
    cin>>target;
    cout<<binarySearching(input,target);
}