#include<iostream>
#include<string>
using namespace std;
class vehicle{
private:
    int price; // data members ---->
    string name;
public:
    // setter ---->
    void setPrice(int p){
        price = p;
    }
    void setName(string n){
        name = n;
    }
    // getter ----->
    void showPrice(){
        cout<<"Price is : "<<price;
    }
    void showname(){
        cout<<"Name is : "<<name;
    }

};
int main(){
    vehicle twowheeler;
    twowheeler.setName("Luna");
    twowheeler.setPrice(20000);

    twowheeler.showname();
    cout<<"\n";
    twowheeler.showPrice();

    return 0;
}