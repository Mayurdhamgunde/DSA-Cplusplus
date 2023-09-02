#include<iostream>
using namespace std;

        // USING RECURSION --->

// int sumdigit(int n){
//     if(n <= 9 && n>=0) return n;
//     return sumdigit(n/10)+sumdigit(n%10);
// }
// int main(){
//     int n;
//     cout<<"Enter the number :- ";
//     cin>>n;
//     cout<<sumdigit(n);

//     return 0;
// }


        // USING RECURSION --->


int main(){
    int n;
    cin>>n;
    int sum = 0;
    int rem =n;
    while(n>0){
        rem = n%10;
        sum = sum+rem;
        n=n/10;
    }
    cout<<sum;

    return 0;
}