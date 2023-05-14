#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the row size of 1st matrix = ";
    cin>>m;
    cout<<"Enter the column size of 1st matrix = ";
    cin>>n;
    int p,q;
    cout<<"Enter the row size of 2nd matrix = ";
    cin>>p;
    cout<<"Enter the column size of 2nd matrix = ";
    cin>>q;
    int a[m][n];
    int b[p][q];
    if(n==p){
        cout<<"Enter elements of 1st matrix = "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Enter elements of 2nd matrix = "<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;

                for(int k=0;k<p;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }

            }
        }
        cout<<"After multiplication matrix is : "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    else{
        cout<<"Matrices cannot be multiplied ";
    }

    return 0;
}