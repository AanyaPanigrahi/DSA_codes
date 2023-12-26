#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val=data;
        left=right=NULL;
    }
};

class BST{
    public:
    Node* root;
    BST(){
        root=NULL;
    }

    void insert(int data){
        Node* newNode=new Node(data);
        if(root==NULL){
            root=newNode;
            return;
        }
        Node* current=root;
        while(true){
            if(current->val>data){
                if(current->left==NULL){
                    current->left=newNode;
                    return;
                }
                current=current->left;
            }
            else if(current->val<data){
                if(current->right==NULL){
                    current->right=newNode;
                    return;
                }
                current=current->right;
            }
    }
}

    bool search(Node* root, int data){
        if(root==NULL) return false;
        if(root->val==data) return true;
        if(root->val<data){
            return search(root->right,data);
        }
        if(root->val>data){
            return search(root->left,data);
        }
    }
};
Node* largestRightmostNode(Node* root){
    Node* curr= root;
    while(curr->right!=NULL){
        curr=curr->right;
    }
}
Node* deleteBST(Node* root , int key){
    if(root==NULL){
        return root;
    }
    if(root->val>key){
        root->left=deleteBST(root->left,key);
    }
    else if(root->val<key){
        root->right=deleteBST(root->right,key);
    }
    else{
        //0 child ahead
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        //1 child linked
        else if(root->left==NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }
        //2 child linked
        else{
            Node* justSmaller=largestRightmostNode(root->left); 
            //or just greater
            //smallest greater num or greatest smaller num
            root->val=justSmaller->val;
            root->left=deleteBST(root->left,justSmaller->val);
        }
}
}
void inorderTrav(Node* root){
    if(root==NULL) return;
    inorderTrav(root->left);
    cout<<root->val<<" ";
    inorderTrav(root->right);
}

int main(){
    BST bst;
    bst.insert(6);
    bst.insert(3);
    bst.insert(1);
    bst.insert(5);
    bst.insert(4);
    bst.insert(9);
    bst.insert(7);
    inorderTrav(bst.root);
    cout<<endl;
    cout<<bst.search(bst.root,1)<<endl;
    cout<<bst.search(bst.root,2)<<endl;
    deleteBST(bst.root,7);
    inorderTrav(bst.root);
    cout<<endl;
    deleteBST(bst.root,3);
    inorderTrav(bst.root);
    cout<<endl;
    deleteBST(bst.root,4);
    inorderTrav(bst.root);
    //       6
    //   3        9
    //1     5  7
    //    4

}