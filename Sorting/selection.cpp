#include <iostream>
using namespace std;
void selsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}
int main(){
    int arr[7]={11,2,6,3,8,44,9};
    int size=7;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selsort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}