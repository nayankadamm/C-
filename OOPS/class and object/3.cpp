#include<iostream>
using namespace std;
class car
{
    private:
    string name;
    string year;
    string model;
public:
car(string name2,string year2,string model2)
{
    name= name2;
    year=year2;
    model = model2;
}
void display()
{
    cout<<"Car Name::"<<name<<endl;
    cout<<"Year::"<<year<<endl;
    cout<<"Model Number::"<<model<<endl;
}
};
int main(){
    car c("ford","2022","1");
    c.display();
    cout<<endl;
    car c1("BMW","2021","2");
    c1.display();
}