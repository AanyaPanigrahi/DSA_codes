#include <iostream>
using namespace std;
int main(){

    //array - homogenous entities, contiguous memory allocation
    //declaration & initialisation
    char arr[5]; //later initialise as arr[i]=value
    int array[]={0,1,2,3,4}; //method 2 dec+initialise
    cout<<sizeof(array)<<endl; //int 4 * size 5 = 20
    cout<<sizeof(arr)<<endl; //char 1 * size 5 = 5

    //accessing elements through base memory address

    //1D Array
    //memory address of element at ith position
    //base address + i*sizeof(datatype)

    //2D Array
    //3D Array
}