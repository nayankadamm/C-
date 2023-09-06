#include<iostream>
using namespace std;
class car{
    string car1,car2,car3;
    public:
    void ford(string car){
        car1 = car;
    }
    void mercedies(string car){
        car2 = car;
    }

    void display(){
        cout<<"first car is::"<<car1<<endl;
        cout<<"second car is::"<<car2<<endl;
    }
};
int main(){
car c;
c.ford("ford");
c.mercedies("mercedies");
c.display();
}