#include<iostream>
using namespace std;

int add = 0;

void sum(int a, int b){
    cout<<"the sum of "<<a<<" and "<< b<< " is "<<a + b<<endl;
}

int main(){
    int n1, n2;
    cout<<"Enter the value of number 1 "<<endl;
    cin>>n1;
    cout<<"Enter the value of number 2 "<<endl;
    cin>>n2;

    sum(n1, n2); // call by value
    return 0;
}
