#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Maxheap{
    vector<int>hp;

    void upheapify(int ci){
        while(ci > 0){
            int pi = (ci-1)/2;
            if(hp[pi]<hp[ci]){
                swap(hp[ci],hp[pi]);
                ci = pi;
            }else{
                break;
            }
        }
    }

    void downheapify(int idx){
        while(idx<hp.size()){
            int lc = 2*idx+1;
            int rc = 2*idx+2;
            if(lc>=hp.size()) break;    // idx -> leaf
            int maxEle = idx;
            if(hp[lc]>hp[maxEle]){
                maxEle = lc;
            }
            if(rc<hp.size() and hp[rc]>hp[maxEle]){
                maxEle = rc;
            }
            if(maxEle != idx){
                swap(hp[idx],hp[maxEle]);
                idx = maxEle;   // foe next iteration --- >
            }else{
                break;
            }
        }
    }
public:

    void display(){
        cout<<"[";
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]\n";
    }

    bool empty(){
        return hp.size() == 0;
    }

    void push(int element){
        hp.push_back(element);
        upheapify(hp.size()-1);
    }
    void pop(){
        // removes the highest priority element
        if(empty())return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        if(!empty())
            downheapify(0);
    }
    void peek(){
        if(empty())cout<<INT_MIN;
        cout<<hp[0];
    }

};


int main(){
    Maxheap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);

    hp.display();
    hp.peek();

    return 0;
}