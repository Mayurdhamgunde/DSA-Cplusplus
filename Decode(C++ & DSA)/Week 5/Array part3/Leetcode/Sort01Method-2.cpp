#include<iostream>
#include<vector>
using namespace std;
void Sort01(vector<int>&arr){
    int n = arr.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==1&&arr[j]==0){
            arr[i]=0;
            arr[j]=1;
            i++;
            j--;
        }
        if(arr[i]==0)i++;
        if(arr[j]==1)j--;
       
    }
}

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
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
    Sort01(v);
    display(v);

    return 0;
}