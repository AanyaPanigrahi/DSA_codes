#include <stdio.h>
#include <stdlib.h>

void show(int arr[], int n){
    //traversal
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertidx(int arr[],int size, int element, int capacity, int index){
    // if(size>capacity){
    //     return -1;
    // }
    for(int i=size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}

void deletion(int arr[],int size, int index){
    //deletion
    for(int i=index+1; i<=size;i++){
        arr[i-1]=arr[i];
    }
    for(int i=0; i<size;i++){
        printf("%d ",arr[i]);
    }

}
int main(){
    int arr[10]={1,4,7,3};
    show(arr,4);
    int size=4;
    int elem=5;
    int idx=2;
    insertidx(arr,4,elem,10,idx);
    show(arr,5);
    deletion(arr,4,idx);
}