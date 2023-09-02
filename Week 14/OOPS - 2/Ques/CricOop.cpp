#include<iostream>
using namespace std;
class Cricketer{
 public:
    string name;
    int age;
    int noOfTestmatches;
    int avgruns;
};
int main(){
    Cricketer virat;
    virat.name = "Virat Kohli";
    virat.age = 30;
    virat.noOfTestmatches = 90;
    virat.avgruns = 50;

    Cricketer rohit;
    rohit.name = "Rohit Sharma ";
    rohit.age = 41;
    rohit.noOfTestmatches = 300;
    rohit.avgruns = 80;

    Cricketer cricketers[] = {virat,rohit};
    int n = sizeof(cricketers)/sizeof(cricketers[0]);

    for(int i=0;i<n;i++){
        cout<<"\n";
        cout<<"Name : "<<cricketers[i].name<<endl;
        cout<<"Age : "<<cricketers[i].age<<endl;
        cout<<"No_of_Test_Matches : "<<cricketers[i].noOfTestmatches<<endl;
        cout<<"Average runs : "<<cricketers[i].avgruns<<endl;
    }

    return 0;
}