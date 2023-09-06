#include<iostream>
using namespace std;
class abc{
    int number;
    public:
    abc(int n){
        number = n;

    }
    void display(){
        cout<<"number is::"<<number<<endl;
    }
};
int main(){
    //copy constructor
    abc a(10);
    abc b = a;
    b.display();
    return 0;
}