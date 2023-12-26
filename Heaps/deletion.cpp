#include <iostream>
using namespace std;
int const A=1e3;

void removeElementminheap(int arr[A],int &size){
    arr[1]=arr[size];
    size--;
    int curr=1;
    while(curr*2<=size){
        int leftchild=curr*2;
        int rightchild=curr*2+1;
        int minchild=leftchild;
        if(rightchild<=size && arr[rightchild]<arr[leftchild]){
            minchild=rightchild;
        }
        if(arr[curr]<=arr[minchild]){
            return;
        }
        swap(arr[curr],arr[minchild]);
        curr=minchild;
    }
}

void removeElementmaxheap(int abc[], int &size){
    abc[1]=abc[size];
    size--;
    int curr=1;
    while(curr*2<=size){
        int leftchild=curr*2;
        int rightchild=curr*2+1;
        int maxchild=leftchild;
        if(rightchild<=size && abc[rightchild]>abc[leftchild]){
            maxchild=rightchild;
        }
        if(abc[curr]>=abc[maxchild]){
            return;
        }
        swap(abc[curr],abc[maxchild]);
        curr=maxchild;
    }
}

int main(){
    //deletion in minHeap
    int arr[A]={-1,10,20,30,40,50};
    int size=5;
    removeElementminheap(arr,size);
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    //deletion in maxHeap
    int arey[A]={-1,90,80,70,20,50,60};
    int sz=6;
    removeElementmaxheap(arey,sz);
    for(int i=0;i<=sz;i++){
        cout<<arey[i]<<" ";
    }cout<<endl;

}