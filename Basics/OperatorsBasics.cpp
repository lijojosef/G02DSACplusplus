#include<iostream>
using namespace std;

int main()
{
    int i = 3;
    int a = 2;
    // a = 2, i = 3
    // sum =  2 + (3)
    // i = 4;
    // int sum = a + (i++);

    // i  = 4;
    //sum = 2 + 4 = 6
    int sum = a + (++i);

    cout<<sum<<endl;
    cout<<i<<endl;

    
    int j = 1;
    while(j <= 5){
        cout<<j<<" ";
        j++;
    }
    cout<<endl;

    int z = 1;
    for( ; ; ){
        if(z <= 3){
            cout<<z<<endl;
            z++;
        }else{
            break;
        }
    }cout<<endl;

    for(int a = 0, b = 1; a >= 0 && b >= 1; a--, b--){
        cout<<a<<" " << b << endl;
    }
    
    return 0;
}