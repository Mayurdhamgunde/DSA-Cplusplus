#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>>graph;
int v;  // no of vertices;

void add_edge(int src,int dest,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void dfs(int node,unordered_set<int>&visited){
    visited.insert(node);
    for(auto neighbors:graph[node]){
        if(not visited.count(neighbors)){
            dfs(neighbors,visited);
        }
    }
}

int connected_components(){
    int result = 0;
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        // go to every vertex
        // if from a vertex we can initialize a dfs, we got one more cc
        if(visited.count(i) == 0){
            result++;
            dfs(i,visited);
        }
    }
    return result;
}

int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);
    }
    cout<<connected_components()<<'\n';

    return 0;
}
