#include<iostream>
using namespace std;
class Gun{
 public:
    int ammo;
    int damage;
    int scope;
};
class player {
private:
    int score;
    int health;
    int age;
    bool alive;
    Gun gun;

public:
    //  getters ---- > 

    int showscore(){
        return score;
    }
    int showhealth(){
        return health;
    }
    int showage(){
        return age;
    }
    int showisalive(){
        return alive;
    }
    Gun getgun(){
        return gun;
    }

    //  setters  --- >

    Gun setgun(Gun gun){
        this->gun = gun;
    }
    void setScore(int score){
        player::score = score; // or we can also write // this->score = score;
    }
    void sethealth(int health){
        player::health = health;
    }
    void setage(int age){
        this->age = age;
    }
    void isalive(bool alive){
        this->alive = alive;
    }
};

int addScore(player a,player b){
    return a.showscore()+b.showscore();
}

player getMaxScore(player a,player b){
    if(a.showscore()>b.showscore()){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    player harsh;
    player amit;

    Gun akm;
    akm.ammo = 30;
    akm.damage = 59;
    akm.scope = 2;

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;


    harsh.setScore(100);
    harsh.sethealth(90);
    harsh.setgun(akm);

    amit.setScore(150);
    amit.sethealth(40);
    amit.setgun(awm);

    cout<<harsh.getgun().ammo;
    cout<<"\n";
    cout<<amit.getgun().damage;
    
    // harsh.setage(20);
    // harsh.isalive(false);

    // amit.setage(30);
    // amit.isalive(true);

    // cout<<amit.showage()<<endl;
    // cout<<amit.showisalive()<<endl;

    // cout<<addScore(amit,harsh)<<endl;

    // player aman = getMaxScore(harsh,amit);

    // cout<<aman.showscore();

    return 0;
}