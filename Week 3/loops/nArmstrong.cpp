#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=500;i++){
        int x=0,temp=i;
        while(temp>0){
            int m = temp%10;
            x = x+(m*m*m);
            temp=temp/10;
        }
    if(i==x){
        cout<<i<<endl;
    }
    }

    return 0;
}