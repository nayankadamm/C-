#include<iostream>
using namespace std;

     
    void func(){
      static  int  counter =0;
        counter++;
        cout<<counter<<endl;
    }

int main(){
func();
func();
}