#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *left,*right;
    Node(int key){
        val = key;
        left = right = NULL;
    }
};
int minimium(Node* root){
    if(root==NULL)return -1;
    if(root->left==NULL and root->right==NULL){
        return root->val;
    }
    minimium(root->left);
}
int maximum(Node* root){
    if(root==NULL)return -1;
    if(root->left==NULL and root->right==NULL)return root->val;
    maximum(root->right);
}
int main(){
    Node* root = new Node(49);
    root->left = new Node(30);
    root->right = new Node(50);
    root->left->left = new Node(25);
    root->left->right = new Node(35);
    root->right->left = new Node(45);
    root->right->right = new Node(60);
    cout<<minimium(root)<<endl;
    cout<<maximu(root)<<endl;


    return 0;
}