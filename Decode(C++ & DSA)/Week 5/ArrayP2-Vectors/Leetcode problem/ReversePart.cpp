#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    return;
}
void reversePart(int s,int e,vector<int>& v){
    while(s<=e){
        int temp = v[s];
        v[s] = v[e];
        v[e] = temp;
        s++;
        e--;
    }
    return;
}
int main(){
    vector<int> v;
    int n,start,end;
    cout<<"Enter the size = ";
    cin>>n;

    cout<<"Enter the elements = ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    cout<<endl;

    cout<<"Enter starting and ending index to reverse = ";
    cin>>start>>end;

    reversePart(start,end,v);

    display(v);

    return 0;
}