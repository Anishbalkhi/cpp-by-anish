#include<iostream>
using namespace std;

class Node{
public:
int data;
Node*left;
Node*right;

Node(int x){
data = x;
left = right = NULL;
}

};

void inorder(Node*root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


void preorder(Node*root){
    if(root == nullptr) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node*root){
    if(root == nullptr) return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node*root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
inorder(root);
cout<<endl;
preorder(root);
cout<<endl;
postorder(root);
}