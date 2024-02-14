#include<array>
#include<iostream>
#include<algorithm>
using namespace std;

void updateArray(array<int, 5> arr, int ind, int updatedValue)
{
    arr[ind] = updatedValue;
}

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    updateArray(arr, 1, 30);
    
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    arr[1] = 30;

    // arr.begin()
    // arr.end();

    sort(arr.begin(), arr.end());

    // classical array
    // sort(arr, arr+n);
    
    array<int, 10> filledArray;
    filledArray.fill(2);

    // arr.at(1)
    // arr.front()
    // arr.back()
    

    


    return 0;
}