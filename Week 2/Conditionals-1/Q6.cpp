#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Enter the marks of A B and C :- ";
    cin>>A>>B>>C;
    if((A<=B)&&(A<=C)){
        cout<<"A has least marks"<<endl;
    }
    else if((B<=C)&&(B<=A)){
        cout<<"B has least marks"<<endl;
    }
    else{
        cout<<"C has least marks"<<endl;
    }

    return 0;
}