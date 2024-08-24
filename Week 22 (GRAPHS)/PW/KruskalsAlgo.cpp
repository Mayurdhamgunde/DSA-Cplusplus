#include<iostream>
#define ll long long int
#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&parent,int a){
    return parent[a] = ((parent[a] == a)?a:find(parent,parent[a]));
}

void Union(vector<int>&par,vector<int>&rank,int a,int b){
    a = find(par,a);
    b = find(par,b);
    if(a == b)return;
    if(rank[a] >= rank[b]){
        rank[a]++;
        par[b] = a;
    }
    else{
        rank[b]++;
        par[a] = b;
    }
}

struct Edge {
    int src;
    int dest;
    int wt;
};

bool cmp(Edge el,Edge e2){
    return el.wt<e2.wt;
}

ll kruskals(vector<Edge>&input,int n,int e){        // int n = no of vertices;
    sort(input.begin(),input.end(),cmp);
    vector<int>parent(n+1);
    vector<int>rank(n+1,1);
    for(int i=0;i<=n;i++){
        parent[i] = i;          // Initally all are their own parents. 
    }
    int edgeCount = 0;      // Finally you will pick n-1 edges.
    int i=0;
    ll ans = 0;
    while(edgeCount < n-1 and i < input.size()){
        Edge curr = input[i];  // because input is sorted so we will get min wt edge
        int srcpar = find(parent,curr.src);
        int destpar = find(parent,curr.dest);
        if(srcpar != destpar){
            // include edge as this will not make cycle.
            Union(parent,rank,srcpar,destpar);
            ans += curr.wt;
            edgeCount++;
        }

        i++;        // does not matter u picked last edge or not, we still need to go to next edge;
    }
    return ans;
}

int main(){
    int n,e;        // No. of vertices and no of edges.
    cin>>n>>e;
    vector<Edge> v(e);
    for(int i=0;i<e;i++){ 
        cin>>v[i].src>>v[i].dest>>v[i].wt;
    }
    cout<<kruskals(v,n,e)<<endl;

    return 0; 
}