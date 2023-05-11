#include<iostream>
using namespace std;

int largest_num(int arr[], int n){
    int result= 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[result])
        result = i;
    }
    return result;
}

int main(){
    int arr[]={1,4,3,64,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<largest_num(arr, n);
    
    return 0;
}