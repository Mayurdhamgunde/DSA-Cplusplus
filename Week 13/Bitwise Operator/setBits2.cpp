#include<iostream>
using namespace std;
int set_bits(int num){
    int count = 0;
    int result = 0;
    while(num>0){
        count++;
        num = (num&(num-1));
    }
    return count;
}
int main(){
    int num;
    cin>>num;
    cout<<set_bits(num);
}