#include<iostream>
#include<stack>
using namespace std;
void bino(int val){
    stack<int> st;
    while(val>0){
        st.push(val%2);
        val /= 2;
    }
    while(!st.empty()){
        cout<<st.top()<< " ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter number :- ";
    cin>>n;
    cout<<"Binary conversion of num "<<n<<" is :- ";bino(n);

    return 0;
}