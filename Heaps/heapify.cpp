#include <iostream>
using namespace std;
int const N=1e3;
void heapify(int array[],int &size,int curr){
    while(curr*2<=size){
        int leftchild=curr*2;
        int rightchild=curr*2+1;
        int minchild=leftchild;
        if(rightchild<=size && array[rightchild]<array[minchild]){
            minchild=rightchild;
        }
        if(array[minchild]>=array[curr]){
            return;
        }
        swap(array[minchild],array[curr]);
        curr=minchild;

    }
}

void heapify_max(int array[],int&size,int curr){
    while(curr*2<=size){
        int leftchild=curr*2;
        int rightchild=curr*2+1;
        int maxchild=leftchild;
        if(rightchild<=size && array[rightchild]>array[maxchild]){
            maxchild=rightchild;
        }
        if(array[maxchild]<=array[curr]){
            return;
        }
        swap(array[maxchild],array[curr]);
        curr=maxchild;

    }
}
int main(){
    int abc[N]={-1,60,10,80,50,5,20,70};
    int size=7;
    for(int i=size/2;i>0;i--){
        heapify(abc,size,i);
    }
    for(int j=0;j<=size;j++){
        cout<<abc[j]<<" ";
    }
    int xyz[N]={-1,60,10,80,50,5,20,70};
    int sze=7;
    for(int i=sze/2;i>0;i--){
        heapify_max(xyz,sze,i);
    }
    for(int j=0;j<=sze;j++){
        cout<<xyz[j]<<" ";
    }
}