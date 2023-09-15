#include <stdio.h>
#include <stdlib.h>

//linear searching - unsorted
int linearSearch(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if (arr[i]==element){
            return i;
        }
    }
}

//binary searching - sorted
int binSearch(int arr[], int size, int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    }
    //search ends
    return -1;
}

int main(){
    int arr[]={1,2,4,5,8,3,9};
    int element=4;
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans= linearSearch(arr,size,element);
    printf("%d",ans);

    int array[]={1,2,4,5,7,8};
    int elem=5;
    int sz=sizeof(array)/sizeof(array[0]);
    int res=binSearch(array,sz,elem);
    printf("%d",res);
}