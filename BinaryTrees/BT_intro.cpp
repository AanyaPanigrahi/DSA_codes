#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int v){
        this->value=v;
        left=right=NULL;
    }
};

int main(){
    Node* root=new Node(2);
    root->left=new Node(3);
    root->right=new Node(4);
    cout<<"root value: "<<root->value<<endl;
    cout<<"rleft child: "<<root->left->value<<endl;
    cout<<"right child: "<<root->right->value<<endl;
}