/*Create two base classes, Athlete and Student, each having a method show() that displays a message. Derive a class SportsStudent from both Athlete and Student. Use the scope resolution operator to call the show() method of both base classes from an object of SportsStudent. */
#include<iostream>
using namespace std;
class Athlete{
    public:
    void show(){
        cout<<"This is Athelete class"<<endl;
    }
}; 
class student{
    public:
      void show(){
        cout<<"This is the student class"<<endl;
      }
};
class sportstudent:public Athlete , public student{
    public :
    void display(){
        Athlete::show();
        student::show();
    }
};
int main(){
    sportstudent s ;
    s.display();
    return 0 ;
}