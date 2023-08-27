// Odd or even only using bitwise operator

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int num1;
    cout<<"Enter a Number :";
    cin>>num1;

    int x = num1&1;
    
    if(x==1)
    {
        cout<<"The Number is Odd";
    }
    else
    {
        cout<<"The number is Even";
    }

    return 0;
}