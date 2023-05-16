#include<iostream>
using namespace std;

//increasing star pattern
void printPattern(int n){
    for(int i =0; i<n; i++){
        for(int j= 0; j<i+1; j++){
        cout<<"*";
        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    printPattern(n);
    return 0;
}
