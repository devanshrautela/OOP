#include <iostream>
using namespace std;
void compare()
{
    
    string s;
    string r;
    getline(cin,s);
    getline(cin,r);
    int a=s.compare(r);
    cout<<a<<endl;
}
void restart(inp)
{
    cout<<"do you want to exit (y/n)\n";
    cin>>inp;
    while(inp)
    {
        case y:
        compare();
        break;
        
        case n:
        return 0;
        break;
    }
}
int main()
{
    char inp;
    compare();
    restart();

}