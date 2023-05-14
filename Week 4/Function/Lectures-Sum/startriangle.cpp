#include<iostream>
using namespace std;
void startriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int y;
    for(int t=1;t<=3;t++){
        cout<<"Enter number = ";
        cin>>y;
     startriangle(y);
    }
    return 0;
}