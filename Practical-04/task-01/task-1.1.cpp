#include<iostream>
using namespace std;
namespace one{
void add(int a,int b)
{
 cout<<a+b<<endl;
}
}
namespace two{
void add(float a,float b)
{
   cout<<a+b<<endl;
}
}

int main()
{
 one::add(6,8);
 two::add(6.2,3.5);
return 0;
}
