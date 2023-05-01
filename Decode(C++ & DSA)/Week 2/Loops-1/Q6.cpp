#include<iostream>
using namespace std;
int main(){
        int i=0;
        while(i<26){
            cout<<"ASCII value of "<<(char)(i+'A')<<" = "<<(i+'A')<<endl;
            i++;
        }
        return 0;
}