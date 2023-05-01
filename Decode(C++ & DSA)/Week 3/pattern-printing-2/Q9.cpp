#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    for(int g=1;g<=n-1;g++){
        cout<<" ";
    }
        cout<<"1";
        cout<<endl;

    for(int i=2;i<=n;i++){

        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
             cout<<i;
        for(int k=1;k<=2*(i-1)-1;k++){
            cout<<" ";
        }
             cout<<i;
             cout<<endl;
     }
    return 0;
}
    
