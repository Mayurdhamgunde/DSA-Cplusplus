#include<iostream>
#include<vector>
using namespace std;
void firstNonrepeating(vector<int>a,int n){
    int j;
    bool flag = false;
    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j && a[i]==a[j]) break;
        }
            if(j==n){
              cout<<a[i]<<" is first non repeating element";
              flag = true;

              break;
            }
    }
    if(!flag){
        cout<<"There is no non repeating element";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    firstNonrepeating(a,n);
    
    return 0;
}