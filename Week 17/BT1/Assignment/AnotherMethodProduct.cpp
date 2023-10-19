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
int findProduct(TreeNode* root,int &product){
    if(root==NULL)return 1;
    if(root->left) product *= root->left->val;
    if(root->right) product *= root->right->val;
    findProduct(root->left,product);
    findProduct(root->right,product);
    return product;
}
int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    int product = 1;
    cout<<findProduct(a,product);

    return 0;
}

