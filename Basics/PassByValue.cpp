#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<&n<<endl;
}


int main()
{

    int n = 5;
    // cin>>n;

    cout<<&n<<endl;
    
    dummy(n);
    cout<<&n<<endl;
    
    return 0;
}