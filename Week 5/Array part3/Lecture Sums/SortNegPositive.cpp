#include<iostream>
#include<vector>
using namespace std;
void SortNP(vector<int> &v){
    int n = v.size();
    int i=0;
    int j=n;
    while(i<j){
        if(v[i]>0&&v[j]<0){
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
        }
        if(v[i]<0)i++;
        if(v[j]>0)j--;
    }
}
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size = ";
    cin>>n;
    cout<<"Enter elements = ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    SortNP(v);
    display(v);

    return 0;
}