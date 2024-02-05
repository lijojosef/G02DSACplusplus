#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
}


void update(int arr[], int n){
    arr[0] = 100;

    printArray(arr, n);
    
}


int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    
    printArray(arr, 3);
    return 0;
}