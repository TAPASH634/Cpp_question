#include<iostream>
#include<math.h>
using namespace std;
class shape{
    public:
    virtual float area(){
        return 0;
    }
};
class rectangle:public shape{
    public:
    int length , breadth ;
    public:
      rectangle(int length , int breadth):length(length),breadth(breadth){

      }
      float area(){
        // int length = 20 , breadth = 30;
        return length*breadth;
      }
};
class circle:public shape{
    public:
     int radius;
    public:
      circle(int radius):radius(radius){}
      float area(){
        // int radius = 10 ;
        return 3.14 * pow(radius,2);
      }
};
int main(){
//   shape s;
  shape *s1 = new circle(10);
  shape *s2 = new rectangle(5,6);
  cout<<"area of the rectangle is"<<s2-> area();
  cout<<"area of the circle is"<<s1->area();
  delete s1;
  delete s2;
  return 0;
  
}