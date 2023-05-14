#include<iostream>
using namespace std;

int square(int s){
    return s*s;
}

int Countdigit(int n){
    int ans = 0;
    while(n>0){
        ans++;
        n/=10;
    }

    return ans;
}

int main(){
    int num;
    cout<<"Enter the number = ";
    cin>>num;

    int sumOfDigit = Countdigit(num);
    cout<<"Number of digits = "<<sumOfDigit<<endl;

    int Sqr = square(sumOfDigit);
    cout<<"Square of digit = "<<Sqr;

    return 0;
}