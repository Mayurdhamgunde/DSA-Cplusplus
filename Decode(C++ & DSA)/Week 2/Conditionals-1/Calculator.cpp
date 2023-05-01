#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    float result;
    char op;
    cout<<"Enter the calculations to be performed :- "<<endl;
    cin>>num1>>op>>num2;
    switch(op){
        case '+':
            result = num1+num2;
            break;
        case '-':
            result = num1-num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;
        default:
            cout<<"Invalid operator"<<endl;
    }

    cout<<"RESULT = "<<result;

    return 0;
}