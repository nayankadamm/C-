#include<iostream>
using namespace std;
class animal{
    protected:
    string name;
    public:
    void setanimal(string name1){
        name = name1;
    }
    void display(){
        cout<<"the animal name is::"<<name<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<name<< " is barking"<<endl;
    }
};
class cat:public animal{
    public:
    void meaw(){
        cout<<name<<" is meowing"<<endl;
    }
};
int main(){
  dog d;
  d.setanimal("DOG");
  d.bark();

cat c;
c.setanimal("CAT");
c.meaw();
}