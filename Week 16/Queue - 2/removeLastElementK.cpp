#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    for(int i=0;i<5;i++)q.push(i);
    int n = q.size();
    int k = 1;
    int m = n-k;
    queue<int>temp;
    while(m--){
        temp.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        q.pop();
    }
                               
     swap(q,temp);               // while(!temp.empty()){
                                //    q.push(temp.front());
     while(!q.empty()){         //    q.pop();
        cout<<q.front()<<" ";   // }
        q.pop();
     }            

    return 0;
}