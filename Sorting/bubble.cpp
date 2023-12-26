#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[7]={11,2,6,3,8,44,9};
    int size=7;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubblesort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}