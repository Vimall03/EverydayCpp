#include<iostream>
using namespace std;
//Parameterised functions
void printName(string name){
    cout<<"Hey "<< name<<endl;
}

int main(){
    string name;
    cout<<"Enter first person's name : " <<endl;
    getline(cin, name);
    printName(name);

    string name2;
    cout<<"Enter second person's name : " <<endl;
    getline(cin , name2);
    printName(name2);
    return 0;
}