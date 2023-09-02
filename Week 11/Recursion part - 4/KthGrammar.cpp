#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int kthGrammar(int n,int k){
    if(n==1)return 0;
    if(k%2==0){  //even //flip // k/2
        int prevAns = kthGrammar(n-1,k/2);
        if(prevAns==0) return 1;
        else return 0;
    }
    else{       //odd //same // k/2+1
       int prevAns = kthGrammar(n-1,k/2+1);
       return prevAns;
    }
}
int main(){
    int n,k;
    cout<<"Enter the row no : - ";
    cin>>n;
    cout<<"Enter the kth element to find : - ";
    cin>>k;
    cout<<kthGrammar(n,k);

    return 0;
}