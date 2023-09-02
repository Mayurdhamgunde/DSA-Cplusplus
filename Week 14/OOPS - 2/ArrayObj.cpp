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

int main(){

    player harsh; 
    player amit;
    player *urvi = new player;  // dynamic allocation -=-=-= >

    Gun akm;
    akm.ammo = 30;
    akm.damage = 59;
    akm.scope = 2;

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    Gun pistol;
    pistol.ammo = 20;
    pistol.damage = 30;
    pistol.scope = 4;

    harsh.setScore(100);
    harsh.sethealth(90);
    harsh.setgun(akm);

    amit.setScore(150);
    amit.sethealth(40);
    amit.setgun(awm);

    urvi->setScore(60);
    urvi->sethealth(60);
    urvi->setgun(pistol);

    player players[] = {amit,harsh,*urvi};
    int n = sizeof(players)/sizeof(players[0]);

    for(int i=0;i<n;i++){
        cout<<players[i].showscore()<<"\n";
    }
    cout<<urvi->showscore()<<endl;
    cout<<urvi->getgun().ammo<<endl;
    cout<<players[2].getgun().ammo;

    // cout<<harsh.getgun().ammo;
    // cout<<"\n";
    // cout<<amit.getgun().damage;
    // cout<<"\n";
    // cout<<urvi->getgun().scope;

      return 0;
}