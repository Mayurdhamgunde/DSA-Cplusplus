#include<iostream>
using namespace std;
class book {
public:
    char name;
    int price;
    int noOfpages;

    int countBooks(int p){
        if(p<price){
            return 1;
        }
        else{
            return 0;
        }
    }
    bool isBookPresent(char n){
        if(name == n){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){
    book shiv;
    shiv.price = 2000;
    shiv.name = 'H';
    
    cout<<shiv.countBooks(300)<<endl;
    cout<<shiv.isBookPresent('H');

    return 0;
}