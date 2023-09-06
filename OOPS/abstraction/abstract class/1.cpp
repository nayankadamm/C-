#include<iostream>
using namespace std;
class shape{

    public:
    virtual void draw()=0;
};
class circle:public shape{
    int radius;
    public:
    circle(int r){
        radius=r;
    }
    void draw(){
        cout<<3.14*radius*radius;

    }
};
int main()
{
    shape* s1;
    circle c(10);
    s1= &c;
    s1->draw();
    

}