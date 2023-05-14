#include<iostream>
using namespace std;
//strigns
int main(){
    string s = "Hello";
    int len = s.size();//function to find the length of the string
    cout<<s[len-1]<<endl;
    cout<<len<<endl;
    s[len-2] = 'a';
    cout<<s;
    return 0;
}