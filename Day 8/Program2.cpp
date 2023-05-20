#include<iostream>
using namespace std;

void printPattern(int n){
    for (int i = 0; i<n ; i++){
        for(int k = 0; k<i; k++){
            cout<<" ";
        }
        for(int j = 0; j< 2*n - (2*i + 1); j++ ){
            cout<<"*";
        }
        for(int k = 0; k<i; k++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    printPattern(n);
    return 0;
}