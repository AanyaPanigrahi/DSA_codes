#include <iostream>
using namespace std;
int const N=1e3;
#include <algorithm>
#include <vector>
void heapify(int array[],int n, int curr){
    while(curr*2<=n){
        int leftchild=curr*2;
        int rightchild=curr*2+1;
        int maxchild=leftchild;
        if(rightchild<=n && array[rightchild]>array[maxchild]){
            maxchild=rightchild;
        }
        if(array[curr]>=array[maxchild]){
            return;
        }
        swap(array[curr],array[maxchild]);
        curr=maxchild;
    }
}


void heapsort(int arr[],int &n){
    //heapify all parent nodes
    //last parent node at size/2
    int a=n;
    while(a>0){
        swap(arr[1],arr[a]);
    a--;
    heapify(arr,a,1);
    }
}

int main(){
    int n=7;
    int arr[N]={-1,60,10,80,50,5,20,70};
    for(int i=n/2;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    heapsort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    vector<int> v={-1,60,10,80,50,5,20,70};
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
        cout<<v[i];
    }
    return 0;

}