#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=0; i<5; i++){
        for(int j = 0; j<5-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>> n;
    printPattern(n);
    return 0;
}