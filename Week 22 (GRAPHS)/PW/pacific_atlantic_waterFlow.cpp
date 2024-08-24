#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution{
public:

    vector<vector<int>> dir = {{1,0},{-1,0},{0,-1},{0,1}}; // i,j-> [i+1,j] [i-1,j] [i,j-1] [i,j+1]
    int rows;
    int cols;
    vector<vector<int>> h;

    vector<vector<int>> pacificAtlantic(vector<vector<int>>&heights){
        rows = heights.size();
        cols = heights[0].size();
        h = heights;
    }

    vector<vector<bool> > bfs(queue<pair<int,int>>&qu){
        vector<vector<bool> >visited(rows,vector<bool>(cols,false));
        while(not qu.empty()){
            auto cell = qu.front();
            qu.pop();
            int i = cell.first;
            int j = cell.second;
            visited[i][j] = true;
            for(int d=0;d<4;d++){
                int newRow = i+dir[d][0];
                int newCol = j+dir[d][1];
                if(newRow<0 or newCol<0 or newRow >= rows or newCol>=cols)continue;// you exited the grid
                if(visited[newRow][newCol])continue;
                if(h[newRow][newCol]<h[i][j])continue;// h[newRow][newCol] = neighbors height, h[i][j]= curr cells height 
                qu.push({newRow,newCol});
            }
        }
        return visited;
    }


};
