#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>> &v){
    v[0][1]=100;
}
void leength(vector<vector<int>> &v){
    cout<<v.size()<<endl;
    cout<<v[0].size()<<endl;
    cout<<v[1].size()<<endl;
    cout<<v[2].size()<<endl;
}
int main(){
    vector<int> v1;
    v1.push_back(25);
    v1.push_back(2);

    vector<int> v2;
    v2.push_back(96);
    v2.push_back(41);
    v2.push_back(63);
    v2.push_back(72);
    v2.push_back(3);

    vector<int> v3;
    v3.push_back(44);
    v3.push_back(63);
    v3.push_back(4);

    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][1]<<endl;
    change(v);
    cout<<v[0][1]<<endl;
    leength(v);

    return 0;
}