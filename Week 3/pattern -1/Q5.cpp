#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

}
    for(int m=1;m<=n;m++){
        for(int k=1;k<=n-m;k++){
            cout<<"*";
        }
        cout<<endl;
}
    return 0;
}