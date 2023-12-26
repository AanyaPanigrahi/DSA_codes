#include <iostream>
using namespace std;
void inssort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}
int main(){
    int arr[7]={11,2,6,3,8,44,9};
    int size=7;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    inssort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}