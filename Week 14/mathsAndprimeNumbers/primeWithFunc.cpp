#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n){
     if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    if(isprime(x)){
        cout<<"PRIME NUMBER";
    }
    else{
        cout<<"COMPOSITE NUMBER";
    }

    return 0;
}