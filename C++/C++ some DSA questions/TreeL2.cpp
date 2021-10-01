// Binary tree traversals and more..

// 1- Preorder Traversals
// 2- Inorder Traversals
// 3- Postorder Traversals

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
// 1- Preorder Traversals

void preorder(struct node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// 2- Inorder Traversals

void inorder(struct node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// 3- Postorder Traversals

void postorder(struct node* root){
    if(root == NULL ) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl; 
    postorder(root);
    return 0;
}