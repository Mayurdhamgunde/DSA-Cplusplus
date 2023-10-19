#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
    int Mini(TreeNode* root){
        if(root==NULL)return INT_MAX;
        return min( root->val, min(Mini(root->left),Mini(root->right)) );
    }
int main(){
    TreeNode* a = new TreeNode(2);
    TreeNode* b = new TreeNode(3);
    TreeNode* c = new TreeNode(1);
    TreeNode* d = new TreeNode(9);
    TreeNode* e = new TreeNode(6);
    TreeNode* f = new TreeNode(0);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    cout<<Mini(a);
}