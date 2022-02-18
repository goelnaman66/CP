#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};


int count_leaf(Node *node){
    if(node==NULL) return 0;
    if(node->left==NULL && node->right==NULL) return 1;
    
    else{
        return count_leaf(node->left)+count_leaf(node->right);
    }
        
}

void Inorder(Node *node){
    if(node==NULL) return;

    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
 
}

signed main(){
    Node *root = new Node(1);
    root->left= new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    Inorder(root);
    cout<<endl;
    cout<<count_leaf(root);
}