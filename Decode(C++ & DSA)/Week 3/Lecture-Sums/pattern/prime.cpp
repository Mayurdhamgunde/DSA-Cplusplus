#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    bool flag = true;

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag = false;
        }
    }
    if(n==1){
        cout<<"Neither prime nor composite"<<endl;
    }
    else if(flag == true){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }

    return 0;
}