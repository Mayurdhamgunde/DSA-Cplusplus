#include<iostream>
using namespace std;
class player {
private:
    int score;
    int health;
public:
    // setter - - - >
    void setScore(int s){
        score = s;
    }
    void setHealth(int h){
        health = h;
    }
    // getter --- >
    int showScore(){
        return score;
    }
    int showHealth(){
       return health;
    }

};
int main(){
    player amit;
    amit.setScore(100);
    amit.setHealth(90);
    cout<<amit.showScore()<<endl;
    cout<<amit.showHealth();

    return 0;
}