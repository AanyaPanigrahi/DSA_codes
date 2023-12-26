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
//root,left,right

void preorderTraversal(Node* rootnode){
    if(rootnode==NULL) return;
    cout<<rootnode->value<<" ";
    preorderTraversal(rootnode->left);
    preorderTraversal(rootnode->right);
}

//left,root,right
void inorderTraversal(Node* rootnode){
    if(rootnode==NULL) return;
    inorderTraversal(rootnode->left);
    cout<<rootnode->value<<" ";
    inorderTraversal(rootnode->right);
}

//left,right,root
void postorderTraversal(Node* rootnode){
    if(rootnode==NULL) return;
    postorderTraversal(rootnode->left);
    postorderTraversal(rootnode->right);
    cout<<rootnode->value<<" ";
}

int maxDepth(Node* rootnode){
    if(rootnode=NULL) return 0;
    int leftdepth=maxDepth(rootnode->left);
    int rightdepth=maxDepth(rootnode->right);
    int res=(max(leftdepth,rightdepth)+1);
    return res;
}

int leafNodes(Node* rootnode){
    if(rootnode=NULL) return 0;
    if(rootnode->left==NULL && rootnode->right==NULL) return 1;
    int leftLN=leafNodes(rootnode->left);
    int rightLN=leafNodes(rootnode->right);
    return leftLN+rightLN;
}

int main(){
    Node* rootnode=new Node(2);
    rootnode->left=new Node(4);
    rootnode->right=new Node(10);
    rootnode->left->left=new Node(6);
    rootnode->left->right=new Node(5);
    rootnode->right->right=new Node(11);
    preorderTraversal(rootnode);
    cout<<endl;
    inorderTraversal(rootnode);
    cout<<endl;
    postorderTraversal(rootnode);
    cout<<"max : ";
    int res=maxDepth(rootnode);
    cout<<res;
    cout<<endl;
    cout<<leafNodes(rootnode);
    return 0;

}
