#include <iostream>
using namespace std;

int partition(int arr[],int first, int last){
    int pi=arr[last];
    int i=first-1,j=first;
    for(;j<last;j++){
        if(arr[j]<pi){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);
    return i+1;
}

void quickSort(int arr[],int first,int last){
    if(first>=last) return;
    int pivot=partition(arr,first,last);
    quickSort(arr,first,pivot-1);
    quickSort(arr,pivot+1,last);
}

int main(){
    int arr[]={10,28,24,6,5,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}