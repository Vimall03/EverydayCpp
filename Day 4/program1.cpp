#include<bits/stdc++.h>
using namespace std;

int main(){
    /*write a program that takes your age as input 
    and prints of you are a adult or not*/
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;
    if(age >= 18){
        cout<<"You are an adult";
    }
    else{
        cout<<"You are not an adult";
    }
    return 0;
}