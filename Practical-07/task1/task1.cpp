#include<iostream>
using namespace std;
int main()
{
 int ch;
 cout<<"enter the choice :"<<endl<<"1.Year"<<endl<<"2.Month"<<endl<<"3.date"<<endl<<"4.Exit"<<endl;
 cin>>ch;
    switch(ch){
   case 1:
      cout<<"2021"<<endl;
      ch=main();
      break;
   case 2:
      cout<<"october"<<endl;
      ch=main();
      break;
   case 3:
      cout<<"wed 13"<<endl;
      ch=main();
      break;
   case 4:
      return 0;
   default:
      cout<<"invalid choice"<<endl;
      ch=main();
      break;}
}