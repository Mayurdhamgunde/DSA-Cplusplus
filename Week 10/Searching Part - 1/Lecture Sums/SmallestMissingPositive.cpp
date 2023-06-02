#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
    int n = 13;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(i!=arr[i]){
            flag = true;
            cout<<i;
            break;
        }
    }
        if(flag==false){
            cout<<"Absent";
        }
    return 0;
}