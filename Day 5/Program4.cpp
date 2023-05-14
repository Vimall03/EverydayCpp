#include<iostream>
using namespace std;
//loops
int main(){
    for(int i=1; i<=10; i++){
        cout<<i<<" print by for"<<endl;
    }

    int i = 1;
    while(i<=5){
        cout<<i<<" printed by while "<<endl;
        i++;
    }

    i = 8;
    do{
        cout<<i<<" printed by do while "<<endl;
        i++;
    } while(i<=5);


    return 0;
}
