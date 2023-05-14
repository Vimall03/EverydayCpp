#include<iostream>
using namespace std;


int sum(int num1 , int num2){
    int num3 = num1 + num2;
    return num3;
}
int main(){
    int num1, num2, res;
    cout<<"Enter the numbers : "<<endl;
    cin>>num1>>num2;
    res = sum(num1, num2);
    cout<<"sum : "<<res<<endl;

    return 0;
}
