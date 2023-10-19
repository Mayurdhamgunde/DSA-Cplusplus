#include<iostream>
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
void display(TreeNode* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
void nthEle(TreeNode* root,int curr,int level){
    if(root==NULL)return;
    if(curr==level) cout<<root->val<<" ";
    nthEle(root->left,curr+1,level);
    nthEle(root->right,curr+1,level);
}
int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(7);
    TreeNode* c = new TreeNode(9);
    TreeNode* d = new TreeNode(2);
    TreeNode* e = new TreeNode(6);
    TreeNode* f = new TreeNode(9);
    TreeNode* g = new TreeNode(5);
    TreeNode* h = new TreeNode(11);
    TreeNode* i = new TreeNode(5);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    e->left = g;
    e->right = h;
    f->left = i; 
    // display(a);
    nthEle(a,1,3);
}