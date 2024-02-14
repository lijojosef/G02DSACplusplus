#include<iostream>
#include<array>

using namespace std;

void update(int arr[], int i, int updatedValue)
{
    arr[i] = updatedValue;
}

void sizeOfUpdatedArray(int arr[])
{
    cout<<"sizeofarrayupdated is "<<sizeof(arr)<<endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    update(arr, 1, 50);

    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i] <<" ";
    }cout<<endl;

    cout<<"sizeofthearray is "<< sizeof(arr)<<endl;


    return 0;
}