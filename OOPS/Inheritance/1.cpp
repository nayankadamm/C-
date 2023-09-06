#include<iostream>
using namespace std;
class A{
    public:
    int a =10;
    void print(){
        cout<<a;
    }
};
class B:public A{
    public:
    void print2(){
        cout<<a+2;
    }
};
int main()
{
B b;
b.print();
cout<<endl;
b.print2();
}