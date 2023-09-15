#include <iostream>
using namespace std;
int main(){
    //insertion at beginning
    int arr[50],size;
    cout<<"enter size : ";
    cin>>size;
    cout<<"enter elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"current array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    //insert element to be inserted
    int num;
    cout<<"num: ";
    cin>>num;
    size++;
    for(int i=siz;i>=0;i++){
        arr[i+1]=arr[i];
    }
    arr[0]=num;
    for(int i=0; i<=size; i++){

    }

}