#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);

    int key;
    cout<<"Enter the key = ";
    cin>>key;
    for(int i=v.size()-1;i>=0;i--){
        if(v.at(i)==key){
            cout<<i;
            break;
        }
    }

    return 0;
}