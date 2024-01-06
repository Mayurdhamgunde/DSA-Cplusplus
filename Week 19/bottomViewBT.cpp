#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// void bottomview(Node* root){
//     queue<pair <Node*,int> >q;
//     map<int,int>mp;
//     q.push({root,0});
//     while(q.size()>0){
//         auto value = q.front();
//         q.pop();
//         mp[value.second] = value.first->val;

//         if(value.first->left!=NULL)q.push({value.first->left,value.second-1});
//         if(value.first->right!=NULL)q.push({value.first->right,value.second-1});
//     }
//     vector<int>ans;
//     for(auto x:mp){
//         ans.push_back(x.second);
//     }
//     for(auto x : ans){
//         cout<<x<<" ";
//     }
// }

    void bottomview(Node* root){
        queue<pair<Node* , int> >q;
        map<int,int>mp;
        q.push({root,0});
        while(q.size()>0){
            auto value = q.front();
            q.pop();
            mp[value.second] = value.first->val;
            if(value.first->left)q.push({value.first->left,value.second-1});
            if(value.first->right)q.push({value.first->right,value.second+1});
        }
        vector<int>ans;
        for(auto x : mp){
            ans.push_back(x.second);
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
    }
int main(){
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(25);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

    bottomview(root);

    return 0;
}