#include<iostream>
using namespace std;

void printPattern(int n){
    int i, j, k;
    for(i = 0; i<n ;i++){
        //space
        for( j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        //star
        for(k=0; k<2*i +1; k++){
            cout<<"*";
        }
        //space
        for( j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    printPattern(n);
    return 0;
}