//function overloading
#include <iostream>
using namespace std;
void fun(int a){
    cout<<a<<endl;
};
void fun(int a,int b){
    cout<<a<<" "<<b<<endl;
};
int main(){
    fun(10);
    fun(10,20);
    return 0;
}
