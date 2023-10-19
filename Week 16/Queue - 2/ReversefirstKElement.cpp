#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int> &q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverseKEle(queue<int> &q,int k){
    int n = q.size();
    stack<int>st;
    for(int i=1;i<=k;i++){ // remove k elements and push into stack 
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){    // push that k elements into stack 
        int x = st.top();
        st.pop();
        q.push(x);
    }
    for(int j=1;j<=n-k;j++){ // remove and push starting element n-k times in queue 
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
    reverseKEle(q,2);
    display(q);

    return 0;
}