#include<bits/stdc++.h>
using namespace std;
void swapi(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"After swapping = ";
    cout<<swapi(a,b);

    return 0;
}