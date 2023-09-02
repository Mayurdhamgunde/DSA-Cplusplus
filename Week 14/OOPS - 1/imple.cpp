#include<iostream>
using namespace std;
class  player{
    public: 
    int score;
    int health;
};

int main(){
    player shiv;
    shiv.score = 90;
    shiv.health = 100;

    player raj;
    raj.score = 80;
    raj.health = 95;

    cout<<shiv.health<<"\n";
    cout<<raj.health<<endl;
    cout<<shiv.score<<endl;
    cout<<raj.score;

    return 0;
}