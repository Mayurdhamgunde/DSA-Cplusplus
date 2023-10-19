#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float perc;

    Student(string name,int rno,float perc){
        this->name = name;
        this->rno = rno;
        this->perc = perc;
    }

};
    // void change(Student *p){
    //     p->name = "sam";
    // }
int main(){
    Student* s = new Student("mayur",10,50.32);
    cout<<s->name<<endl;
    // change(&s);
    s->name = "sam";
    cout<<s->name<<endl;
    
}