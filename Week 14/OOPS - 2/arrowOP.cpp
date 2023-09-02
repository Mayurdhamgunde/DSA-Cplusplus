#include<iostream>
using namespace std;
class Vehicle{
 private:
    int wheels;         // data members 
    int price;
    bool isAvailable;
 public:
    // <--- getters ---->

    int getwheels(){    // member functions 
        return wheels;
    }
    int getprice(){
        return price;
    }
    int getavailable(){
        return isAvailable;
    }

    //<--- setters ---->

    int setwheels(int wheels){
        Vehicle::wheels = wheels;
        // OR 
        // this->wheels = wheels;
    }
    int setprice(int price){
        this->price = price;
    }
    bool setAvailable(bool isAvailable){
        this->isAvailable = isAvailable;
    }
};

 Vehicle maxPrice(Vehicle a,Vehicle b){
    if(a.getprice()>b.getprice()) return a;
    else return b;
 }
int main(){
    Vehicle ktm;
    Vehicle pulsar;
    Vehicle *shine = new Vehicle;
    Vehicle shineObj = *shine;

    ktm.setwheels(2);
    ktm.setprice(125);
    ktm.setAvailable(true);

    pulsar.setwheels(2);
    pulsar.setprice(50);
    pulsar.setAvailable(false);

    Vehicle Spark = maxPrice(ktm,pulsar);
    cout<<endl;

    // shineObj.setAvailable(true);
   //  cout<<shineObj.getavailable(); // OR 
                                                    // < = = = = = Dynamic Memory Allocation = = = = = >
  // (*shine).setAvailable(false);   
  // cout<<(*shine).getavailable();   // OR

    shine->setAvailable(false);
    cout<<shine->getavailable();

    return 0;
}