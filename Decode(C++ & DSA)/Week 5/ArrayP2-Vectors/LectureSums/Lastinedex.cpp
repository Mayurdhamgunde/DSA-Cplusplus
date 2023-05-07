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

    int index = -1;
    int key;
    cout<<"Enter the key = ";
    cin>>key;

    for(int i=0;i<v.size();i++){
        if(v.at(i)==key){
            index = i;
        }
    }
    cout<<"Element is present at an index "<<index;

    return 0;
}