#include<iostream>
using namespace std;
class mf{
public:
static void staticf(){
    cout<<"static function is called"<<endl;
}
void nonstatic(){
    cout<<"non static function is called"<<endl;
}
};
int main()
{
    mf::staticf();
   mf f;
   f.staticf();
   f.nonstatic();
}