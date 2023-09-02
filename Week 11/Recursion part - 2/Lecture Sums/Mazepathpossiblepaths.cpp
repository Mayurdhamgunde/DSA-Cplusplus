#include<iostream>
using namespace std;
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
    }
    printpath(sr,sc+1,er,ec,s+"R");
    printpath(sr+1,sc,er,ec,s+"D");
}
int main(){
    printpath(0,0,2,2," ");

    return 0;
}