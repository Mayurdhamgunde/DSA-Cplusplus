#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    
    int n = st.size();

    for(int i=0;i<n;i++){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}