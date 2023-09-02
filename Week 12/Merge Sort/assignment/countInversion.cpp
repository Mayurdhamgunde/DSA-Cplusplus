#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>&a,vector<int>&b){
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i] > 2*a[j]){
            count += (a.size() - i);
            j++;   
        }
        else{
            i++;
        }
    }
    return count;
}
void merg(vector<int>&a,vector<int>&b,vector<int>&res){
    int i = 0 ,j = 0,k = 0;

    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }

    if(i==a.size()) while(j<b.size()) res[k++] = b[j++];
    
    if(j==b.size()) while(i<a.size()) res[k++] = a[i++];
}
int mergsort(vector<int>&v){
    int count = 0;
    int n = v.size();
    if(n==1)return 0;
    int n1 = n/2;
    int n2 = n-(n/2);
    vector<int> a(n1),b(n2);
    // copy pasting --- >
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int j=0;j<n2;j++){
        b[j] = v[n1+j];
    }
    // magic aka recursion -- >
    count += mergsort(a);
    count += mergsort(b);
    // Inversion Count --- >
    count += inversion(a,b);
    // merg -- >
    merg(a,b,v);
    a.clear();
    b.clear();
    return count;
}
int main(){
    // int n;
    // cout<<"Enter size :- ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    int arr[] = {2,4,3,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<mergsort(v);

    return 0;
}
