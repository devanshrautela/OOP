#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile;
    myfile.open("example.txt");
    myfile<<"write this to a file!\n";
    myfile.close();
    cout<<"file has been created";
    return 0;
}