/*
    D
    CD
    BCD
    ABCD
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n)
    {
        int j=1;
        char start='A'+ n - i;
        // char start='D'-i+1;
        while(j<=i)
        { 
            cout<<start;
            start++;
            j++;
            
        }
        // start++;
        i++;
        cout<<endl;
    }
    return 0;
}