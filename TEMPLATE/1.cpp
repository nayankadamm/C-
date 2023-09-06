#include<iostream>
using namespace std;
template <class T>
T add(T a, T b){
    return a+b;
}
int main(){
    int sum1= add(1,2);
    double sum2 = add(2,3);
    cout<<sum1<<endl;
    cout<<sum2<<endl;

}