#include <iostream>
using namespace std;

int main()
{
  int num1 = 4;
  int num2 = 2;

  int add = num1+num2;
  int sub = num1-num2;
  int mul = num1*num2;
  int div = num1/num2;
  int mod = num1%num2;
  int ls = num1<<num2;
  int rs = num1>>num2;
  int incr = ++num1;
  int decr = --num2;
  int logic = num1&&num2;
  int bit = num1&num2;

  cout<<"sum : "<<add<<endl<<"sub : "<<sub<<endl<<"mul : "<<mul<<endl<<"div : "<<div<<endl<<"mod : "<<mod<<endl<<"left shift : "<<ls<<endl<<"right shift : "<<rs<<endl<<"incriment : "<<incr<<endl<<"decriment : "<<decr<<endl;
  cout<<"logical : "<<logic<<endl<<"bitwise : "<<bit;

  return 0;  
}