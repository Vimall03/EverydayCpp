#include<bits/stdc++.h>
using namespace std;

//Print the grades according to the marks.
/* below 25 - f
25 - 44 - E
45- 49 - D
50 - 59 - C
60 - 70 - B
80 - 100 - A*/

int main(){
    int marks;
    cout<<"Enter your Marks : "<<endl;
    cin>> marks;

    if(marks < 25){
        cout<<"This is your grade : F";
    }
    else if(marks <= 44 ){
        cout<<"This is your grade : E";
    }
    else if(marks <= 49){
        cout<<"This is your grade : D";
    }
    else if(marks <= 59){
        cout<<"This is your grade : C";
    }
    else if(marks <= 79){
        cout<<"This is your grade : B";
    }
    else if(marks <= 100){
        cout<<"This is your grade : A";
    }
    else{
        cout<<"Enter valid marks";
    }
    return 0;
}