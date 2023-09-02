#include<iostream>
#include<math.h>
using namespace std;
void printFactors(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0)cout<<i<<" ";
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0)cout<<n/i<<" ";
    }

}
int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    printFactors(x);

    return 0;
}

// void printFactors(int n){
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0){
//             cout<<i<<" ";
//             if(i!=sqrt(n)){
//                 cout<<n/i<<" ";
//             }
//         }
//     }
// }