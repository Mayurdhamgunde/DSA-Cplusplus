#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    int val;
    Node *left, *right;
    Node(int key)
    {
        val = key;
        left = right = NULL;
    }
};
void leftView(Node *root, int &maxLevel, int currLevel, vector<int> &ans)
{
    if (root == NULL)
        return;
    if (maxLevel < currLevel)
    {
        maxLevel = currLevel;
        ans.push_back(root->val);
    }
    leftView(root->left, maxLevel, currLevel + 1, ans);
    leftView(root->right, maxLevel, currLevel + 1, ans);
}
int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(25);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

    vector<int>answer;
    int maxLevel = -1,currLevel = 0;
    leftView(root,maxLevel,currLevel,answer);

    for(auto val:answer)cout<<val<<" ";
    cout<<endl;
    return 0;
}
