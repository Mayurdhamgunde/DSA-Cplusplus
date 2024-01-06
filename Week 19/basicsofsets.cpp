#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    s.insert(70);
    s.insert(80);
    s.insert(90);
    int target = 100;
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }
    if(s.find(target)!=s.end()){
        cout<<"found"<<endl;
    }
    else cout<<"absent";

    return 0;
}