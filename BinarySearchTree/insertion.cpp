#include <iostream>
using namespace std;

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

    // void insert(int data){
    //     Node* newNode=new Node(data);
    //     if(root==NULL){
    //         root=newNode;
    //         return;
    //     }
    //     Node* current=root;
    //     while(true){
    //         if(current->val>data){
    //             if(current->left==NULL){
    //                 current->left=newNode;
    //                 return;
    //             }
    //             current=current->left;
    //         }
    //         else{
    //             if(current->right==NULL){
    //                 current->right=newNode;
    //                 return;
    //             }
    //             current=current->right;
    //         }
    //     }
    // }

};
void inorderTraversal(Node* root){
    if(root==NULL)return;
    inorderTraversal(root->left);
    cout<<root->val<<" ";
    inorderTraversal(root->right);
}
Node* insert(Node* root,int data){
        if(root==NULL){
            Node* new_node=new Node(data);
            return new_node;
        }
            if(root->val>data){
                root->left=insert(root->left,data);
            }
            else if(root->val<data) {      
                root->right=insert(root->right,data);
            }
        return root;
    }
int main(){
    BST bst1;
    bst1.root=insert(bst1.root,3);
    insert(bst1.root,1);
    insert(bst1.root,4);
    inorderTraversal(bst1.root);
    return 0;
}