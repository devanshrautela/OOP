#include<iostream>
#include<ctime>
using namespace std;
int main()
{
 int ch;
  time_t now = time(0);
  tm *ltm = localtime(&now);
 cout<<"enter the choice :\n1.Year\n2.Month\n3.Day\n4.Exit\n";
 cin>>ch;
 switch(ch)
 {
   case 1:
      cout<<"year:"<<1900 + ltm->tm_year<<endl;
      break;
      ch=main();
   case 2:
      cout<<"month:"<<1 + ltm->tm_mon<<endl;
      break;
       ch=main();
   case 3:
      cout<<"day:"<<ltm->tm_mday<<endl;
      break;
       ch=main();
    case 4:
       return 0;
       break;
   default:
      cout<<"invalid choice"<<endl;
      break;
      ch=main();
 }
}