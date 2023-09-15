//taking elements during run time
#include <iostream>
using namespace std;
int main(){
    cout<<"enter size: ";
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[0]<<" ";
    }
    return 0;
}