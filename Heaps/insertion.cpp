#include <iostream>
using namespace std;
int const N=1e3;
void insertMinHeap(int minHeap[],int &size, int value){
    size++;
    minHeap[size]=value;
    int curr=size;
    while(curr/2>0 && minHeap[curr/2]>minHeap[curr]){
        swap(minHeap[curr/2],minHeap[curr]);
        curr=curr/2;
    }
}

void insertMaxHeap(int maxHeap[], int &size, int value){
    size++;
    maxHeap[size]=value;
    int curr=size;
    while(curr/2>0 && maxHeap[curr/2]<maxHeap[curr]){
        swap(maxHeap[curr],maxHeap[curr/2]);
        curr=curr/2;
    }
}

int main(){
    int minHeap[N]={-1,10,20,30,40,60};
    int size=5;
    int value=4;
    insertMinHeap(minHeap,size,value);
    for(int i=0;i<=size;i++){
        cout<<minHeap[i]<<" ";        
    }
    cout<<endl;

    int maxHeap[N]={-1,60,40,30,20,10};
    int sz=5;
    int val=35;
    insertMaxHeap(maxHeap,sz,val);
    for(int i=0;i<=size;i++){
        cout<<maxHeap[i]<<" ";        
    }
    cout<<endl;
}