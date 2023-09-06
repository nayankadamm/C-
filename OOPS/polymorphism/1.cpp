// polymorphism
#include<iostream>  
using namespace std;
class shape{
    public:
    virtual void draw()=0;

};
class rectangle:public shape{
    int height,length;
    public:
    rectangle(int h,int l){
        height = h;
        length = l;
    }
    void draw(){
        cout<<"The area of rectangle is::"<<height*length<<endl;
    }

};
class circle:public shape{
    int radius;
    public:
    circle(int r){
        radius =r;
    }
    void draw(){
        cout<<"the area of the circle is::"<<radius*radius*3.14<<endl;
    }
};
int main(){

    shape* s1[2];
    rectangle r(10,20);
    circle c(10);
    s1[0]=&r;
    s1[1]=&c;
   for(int i=0;i<2;i++){
       s1[i]->draw();

    }
}
