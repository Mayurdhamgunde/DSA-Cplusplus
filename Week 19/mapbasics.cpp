#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;

    m["Mayur"] = 10;
    m["Sam"] = 90;

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m["Mayur"];

    // Other Method ---------->
   /* pair<string,int>p1;
    p1.first = "Mayur";
    p1.second = 10;
    m.insert(p1);

    pair<string,int>p2;
    p2.first = "sam";
    p2.second = 90;
    m.insert(p2);
    
    for(pair<string,int> p :m){
        cout<<p.first<<" "<<p.second<<endl;
    }   */
    

}