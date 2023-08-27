#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int num1 = 9;

    cout<<num1<<endl;
    cout<<showbase<<hex<<num1<<endl;
    cout<<showbase<<dec<<num1<<endl;
    cout<<showbase<<oct<<num1<<endl;
    cout<<bitset<4>(num1);

    return 0;
}