#include<iostream>
using namespace std;
int findsum(int curr,int lst){
    if(curr>lst)return 0;
    if(curr%2==0) return findsum(curr+1,lst);
    return curr+findsum(curr+2,lst);
}
int main(){
    int a,b;
    cout<<"Enter the numbers range : ";
    cin>>a>>b;
    cout<<findsum(a,b);
}