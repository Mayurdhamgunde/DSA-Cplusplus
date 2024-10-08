#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int minproduct(vector<int>&arr){
    // int cn,cz,cp = 0;
    // int prod_pos,prod_neg = 1;
    int cn=0;int cz=0;int cp=0;
    int prod_neg=1;int prod_pos=1;
    int largestNegative = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            cn++;
            prod_neg *= arr[i];
            largestNegative = max(largestNegative,arr[i]);
        }
        if(arr[i]==0){
            cz++;
        }
        if(arr[i]>0){
            cp++;
            prod_pos *= arr[i];
        }
    }
    if(cn==0){
        if(cz>0)return 0;
            else{
                auto it = min_element(arr.begin(),arr.end());
                return *it;
            }
    }
    else{

        if(cn%2 == 0){  //  even
            return(prod_neg/largestNegative)*prod_pos;
        }else{
            // odd
            return prod_neg*prod_pos;
        }
    }
}



int main(){
    vector<int> arr {11,15,99,0};
    cout<<minproduct(arr)<<endl;
    return 0;
}