#include<iostream>
#include<stack>
using namespace std;
int prior(char ch){
    if(ch=='+' || ch=='-')return 1;
    else return 2;
}
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "2+6*4/8-3";  // convert it into integer and return it's ans.
    // need two stacks 1 for values and other for operator.
    stack<int>val;
    stack<char>op;
    for(int i=0;i<s.length();i++){
        // check if s[i] is a digit or not --->
        if(s[i]>=48 and s[i]<=57){
            val.push(s[i]-48);
        } 
        else { // s[i] it is +,-,*,/ --->
            if(op.size()==0 or prior(s[i])>prior(op.top())) op.push(s[i]);
            else{
                while(op.size()>0 and prior(s[i]) <= prior(op.top())){   // prior(s[i]) <= prior(op.top());
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();

}