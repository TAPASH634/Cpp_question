#include<iostream>
#include<string>
using namespace std;
int main(){
  string s = "hello";
  string rev = "" ;
  for(int i=s.length()- 1;i >= 0;i--){
     rev = rev+ s[i];    
  }
      // int l = s.length()-1;

  
  cout<<"Reverse string is"<<rev<<endl;
  return 0;
}
