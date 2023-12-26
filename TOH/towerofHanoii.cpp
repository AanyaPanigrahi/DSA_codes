#include <iostream>
using namespace std;
int TOH(int n, char src, char aux, char dest){
    int count=1;
    if(n==0){
        return 0;
    }
    count+=TOH(n-1,src,dest,aux);
    cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<" "<<endl;
    count+=TOH(n-1,aux,src,dest);
    return count;
}
int main(){
    int N=3;
    int c=TOH(N,'A','B','C');
    cout<<c;
    return 0;
}