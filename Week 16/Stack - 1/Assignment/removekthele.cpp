#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>&st){
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        // cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void removeKthele(stack<int>&st,int val){
    stack<int> temp;
    while(st.size()>val){
        temp.push(st.top());
        st.pop();
    }
    st.pop();
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    display(st);
    removeKthele(st,1);
    display(st);

}