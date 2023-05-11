#include<iostream>
using namespace std;


int del_element(int a[], int n, int x){
    int i;
    for (i=0; i<n; i++)
        if(a[i] == x)
            break;
    if (i < n)
        n = n - 1;
        for (int j=i; j<n; j++)
        a[j] = a[j+1];
    return n;
}

int main(){
    int arr[] ={76, 18, 54, 2, 9, 18};
    int n = sizeof(arr)/sizeof(arr[0]);;
    int x=2;
    n = del_element(arr,n,x);
    
    cout << "Modified array : ";
    for (int i=0; i<n; i++)
    cout << arr[i] << " ";
    return 0;
}