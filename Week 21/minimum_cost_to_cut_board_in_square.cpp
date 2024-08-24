/*
Q. A board of length M and width N is given. The task is to break this board into M*N squares such that coast of breaking is minimum. The cutting coast for each edge will be given for the board in two arrays X[] and Y[]. In short, you need to choose such a sequence of cutting such that coast is minimized. Return the minimized cost

*/

    #include<iostream>
    #include<vector>
    #include<algorithm>
    #define ll long long int
    using namespace std;


    bool cmp(int x,int y){
        return x>y;
    }

    ll minCoastToBreakGrid(int n,int m,vector<ll>&vertical,vector<ll>&horizontal){
        sort(vertical.begin(),vertical.end(),cmp);
        sort(horizontal.begin(),horizontal.end(),cmp);
        int hz = 1;
        int vr = 1;
        int h = 0, v = 0;   // two pointers
        ll ans = 0;
        while(h<horizontal.size() and v<vertical.size()){
            if(vertical[v]>horizontal[h]){
                ans += vertical[v]*vr;
                hz++;

                v++;
            }else{
                ans += horizontal[h]*hz;
                vr++;

                h++;
            }
        }
        while(h < horizontal.size()){
            ans += horizontal[h]*hz;
            vr++;

            h++;
        }
        while(v < vertical.size()){
            ans += vertical[v]*vr;
            hz++;

            v++;
        }
        return ans;
    }

    int main(){
        int n,m;
        cin>>m>>n;
        vector<ll> horizontal,vertical;
        for(int i=0;i<m-1;i++){
            int x;
            cin>>x;
            vertical.push_back(x);
        }
        for(int i=0;i<n-1;i++){
            int x;
            cin>>x;
            horizontal.push_back(x);
        }
        cout<<minCoastToBreakGrid(n,m,horizontal,vertical)<<endl;

        return 0;
    }
