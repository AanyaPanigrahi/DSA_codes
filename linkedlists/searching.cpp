#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertathead(Node* &head,int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}
bool search(Node* head, int x)
{
    Node* current = head; // Initialize current
    while (current != NULL) {
        if (current->data == x)
            return true;
        current = current->next;
    }
    return false;
}
int main(){
    Node* head=new Node(5);
    insertathead(head,2);
    insertathead(head,8);
    insertathead(head,3);
    insertathead(head,7);
    cout<<search(head,7);
}