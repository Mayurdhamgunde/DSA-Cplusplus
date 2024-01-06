#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#include<unordered_map>
#include<climits>
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
Node* construct(int arr[],int n){
    queue<Node*>q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 and i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j!=n and arr[j]!=INT_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}
void topview(Node* root){
    unordered_map<int,int>m;    // <level,value>
    queue< pair<Node*,int> >q;
    pair<Node*,int>r;
    r.first = root;
    r.second = 0;
    q.push(r);
    while(q.size()>0){
        Node* temp = (q.front()).first;
        int levels = (q.front()).second;
        q.pop();
        if(m.find(levels)==m.end()){
            m[levels] = temp->val;
        }
        if(temp->left != NULL){
            pair<Node*,int>p;
            p.first = temp->left;
            p.second = levels - 1;
            q.push(p);
        }
        if(temp->right != NULL){
            pair<Node*,int>p;
            p.first = temp->right;
            p.second = levels + 1;
            q.push(p);
        }
    }
        int minLevels = INT_MAX;
        int maxLevels = INT_MIN;
        for(auto x:m){
            int level = x.first;
            minLevels = min(minLevels,level);
            maxLevels = max(maxLevels,level);
        }
        for(int i=minLevels;i<=maxLevels;i++){
            cout<<m[i]<<" ";
        }
        cout<<"\n";
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    topview(root);
    return 0;
}