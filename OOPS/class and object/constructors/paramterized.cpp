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
    abc a(10);
    a.display();
    return 0;
}
