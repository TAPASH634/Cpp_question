#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "racecar";
    string rev ;
    for(int i=s.length()-1;i>=0;i--){
      rev = rev + s[i];
    }
    // cout<<rev<<endl;
    if(rev == s){
        cout<<"pallindrome";
    }
    return 0;
}
