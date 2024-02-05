#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < 15; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void printCharArray(char arr[], int n){
    for(int i = 0; i < 15; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int main()
{
    // declaration
    int number[15];

    int second[3] = {5, 7, 11};

    int third[15] = {2, 7};
    // cout<<third[10]<<endl;

    // printArray(third, 15);
    
    // cout<<second[2]<<endl;

    int fourth[12] = {0};
    // printArray(fourth, 12);

    // cout<<second[5]<<endl;
    // finding the size of an array
    int thirdSize = sizeof(third)/sizeof(int);
    // cout<<thirdSize;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout<<ch[3]<<endl;

    printCharArray(ch, 5);
    return 0;
}