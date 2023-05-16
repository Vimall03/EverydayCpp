#include<iostream>
using namespace std;
// four star pattern 
void printPattern(int n){
    int i, j;
    for(i=0; i<n; i++ ){
        for(j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"input n :";
    cin>>n;
    printPattern(n);
    return 0;
}