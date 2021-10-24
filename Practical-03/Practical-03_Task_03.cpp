#include<iostream>
using namespace std;
int main()
{
    char a;
    char *ptr = &a;
    cout<<"Enter the Value\n";
    cin>>a;
    cout<<"The First Letter is : "<<*ptr;
    return 0;
}
