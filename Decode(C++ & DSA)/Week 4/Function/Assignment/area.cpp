#include<bits/stdc++.h>
using namespace std;
float area(float r){
    float ar = 3.12*r*r;

    return ar;
}
int main(){
    float r;
    cout<<"Enter the radius = ";
    cin>>r;
    cout<<area(r);

    return 0;
}