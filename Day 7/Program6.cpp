#include<iostream>
using namespace std;

void printPattern(){
    for(int i=0; i<5; i++){
        for(int j=1; j<=5-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    printPattern();
    return 0;
}