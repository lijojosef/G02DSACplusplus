#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    switch (num)
    {
    case 1:
        cout<<"first" <<endl;
        break;
        cout<<"next thing after break"<<endl;

    case 2:
        cout<<"second" <<endl;
        break;

    case 3:
        cout<<"three" <<endl;
        break;
    
    default:
        cout<<"It's the default case"<<endl;
        break;
    }
    return 0;
}