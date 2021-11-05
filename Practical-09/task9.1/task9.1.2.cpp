#include <iostream>
using namespace std;
#define MAX 10 
class student
{
private:
        char name[30];
        int  rollNo;
        char sec;
public:
        void getDetails(void);
        void putDetails(void);
};
void student :: getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >>rollNo;
    cout<<"enter the section: ";
    cin >>sec;
}
void student :: putDetails(void){
    cout<<"Name: "<<name<<endl<<"Roll Number: "<<rollNo<<endl<<"Section: "<<sec<<endl;
}
int main()
{
    student std[MAX];
    int n,i;
    cout<<"Enter total number of students: ";
    cin>>n;
    for(i=0;i<n;i++){
        int series=0;
        series=i;
        ++series;
        cout<<"Enter details of student "<<series<<":\n";
        std[i].getDetails();
    }     
    cout<<endl;
    cout<<"Student details:\n";
    for(i=0;i<n;i++){
    int series=0;
    series=i;
    ++series;
        cout<<"Details of student "<<series<<":\n";
        std[i].putDetails();
    }
    cout<<"Total number of students in college "<<n;
    return 0;
}
