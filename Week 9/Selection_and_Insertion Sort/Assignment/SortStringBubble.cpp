#include<iostream>
#include<string>
using namespace std;
int main(){
    string s[9] = {"raghav","urvi","harsh","vishwa","sanket","manvi","hyder","priya","sudhanshu"};
    int n = 9;
    for(string ele : s){
        cout<<ele<<endl;
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                flag = false;
            }
        }
        if(flag == true){
            break;
        }
    }
    for(string el : s){
        cout<<el<<endl;
    }

    return 0;
}