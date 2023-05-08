#include<iostream>
using namespace std;

int c = 99;//global variable 

int main(){
    int a, b , c;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    c = a +b;//local variable
    cout<<"the sum of a and b : "<< c <<endl;
    cout<<"the global value of c : "<< ::c <<endl;//scope resolution operator (::) to extract the value of global variable

    //Refrence variable
    float x = 123;
    float & y = x;

    cout<<"value of x :"<<x<<" value of y :"<<y<<endl;

    //type casting

    int p = 45;
    float q = 123.123;

    cout<<"converting int a to float : "<<(float)p<<endl;
    cout<<"converting float b to int : "<<(int)q<<endl;

    return 0;
}
