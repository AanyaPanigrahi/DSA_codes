#include <iostream>
using namespace std;
#include <vector>

class Node{

    public:
    int val;
    Node* left;
    Node* right;

    Node(int v){
        val=v;
        left=right=NULL;
    }
};

class BST{
    public:
    Node* root;
    BST(){
        root=NULL;
    }


};

void inorderTraversal(Node* root){
    if(root==NULL)return;
    inorderTraversal(root->left);
    cout<<root->val<<" ";
    inorderTraversal(root->right);
}

Node* sortedToBalancedBST(vector<int> xyz,int first, int last){
    if(first>last){
        return NULL;
    }
    int mid=(first+last)/2;
    Node* root=new Node(xyz[mid]);
    root->left=sortedToBalancedBST(xyz,first,mid-1);
    root->right=sortedToBalancedBST(xyz,mid+1,last);
    return root;
}

int main(){
    BST bst;

    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int> abc(n);
    for(int i=0;i<n;i++){
        cout<<"enter elem "<<i<<" :";
        cin>>abc[i];
    }
    bst.root=sortedToBalancedBST(abc,0,n-1);
    inorderTraversal(bst.root);

}