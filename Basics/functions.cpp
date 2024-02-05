#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i = 1; i <= b ; i++){
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a = 2, b = 3;
    int answer = power(a, b);
    cout<<"Answer is "<< answer<<endl;

    a = 2;
    b = 10;
    int answer2 = power(a, b);
    cout<<"Answer is "<< answer2<<endl;

    return 0;
}