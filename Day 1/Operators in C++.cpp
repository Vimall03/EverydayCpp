// Operators in C++
#include<iostream>
using namespace std;

int main(){
    int a = 2, b = 6;

    //arthematic operators
    cout<<"THIS IS A LIST OF ARTHEMATIC OPERATORS: "<<endl;

    cout<<"This is additon operator "<< a + b <<endl;
    cout<<"This is Subraction operator "<< a - b <<endl;
    
    cout<<"This is division operator "<< a / b <<endl;
    cout<<"This is multiplication operator "<< a * b <<endl;
    cout<<"This is modulus operator "<< a % b <<endl; // shows the remainder

    cout<<"This is value of a before postfix increment operator "<< a++ <<endl;//postfix incremnet operator
    cout<<"This is value of a after postfix increment operator  "<< a<<endl;

    cout<<"This is value of a before postfix decrement operator "<< a-- <<endl;//prefix increment operator
    cout<<"This is value of a after postfix after operator "<< a<<endl;

    cout<<"This increases the value and then prints the value  "<< ++a <<endl;//prefix increment operator
    cout<<"This decreases the value and then prints the value  "<< --a <<endl;//prefix decrement operator 
    cout<<endl;

// Comparision operators

    cout<<"THIS IS A LIST OF COMPARISION OPERATORS"<<endl;// returns value as 1 for True and 0 for False.

    cout<<"a > B Checks if A is greater than B "<< (a > b) <<endl;
    cout<<"a < B Checks if B is greater than A "<< (a < b) <<endl;
    cout<<"a => B Checks if A is equal to or greater than B "<< (a >= b) <<endl;
    cout<<"a <= B Checks if B is equal to or greater than A "<< (a <= b) <<endl;
    cout<<"a == B Checks if A is equal to B "<< (a == b) <<endl;
    cout<<"a != B Checks if A is not equal than B "<< (a != b) <<endl;
    cout<<endl;

//Logical operators
    cout<<"THIS IS A LIST OF LOGICAL OPERATORS"<<endl;// returns value as 1 for True and 0 for False.

    cout<<"(a > b) && (a >= b) AND operator "<<((a > b) && (a >= b)) <<endl;
    cout<<"(a < b) || (a == b) OR operator "<<((a > b) || (a >= b)) <<endl;
    cout<<"(a < b) || (a == b) NOT operator "<<!((a > b) || (a >= b)) <<endl;
    cout<<endl;

//Assignment Operator
    cout<<"THIS IS ASSIGNS A VALUE TO AN INTEGER"<<endl;
    int x = 10;
    cout<< "10 is assigned as the value of x, x = "<<x<<endl;

    return 0;
}
