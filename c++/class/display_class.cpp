#include<iostream>
using namespace std;
class students
{
    public:
    int rno;
    char name[20];
};
int main()
{
    students s1, s2;
    cout<<"Enter Roll Number "<<endl;
    cin>>s1.rno;
    cout<<"Enter Name "<<endl;
    cin>>s1.name;
    cout<<"Roll Number :"<<s1.rno<<"\t"<<"Student Name :"<<s1.name<<endl;
    cout<<"Enter Roll Number "<<endl;
    cin>>s2.rno;
    cout<<"Enter Name "<<endl;
    cin>>s2.name;
    cout<<"Roll Number :"<<s2.rno<<"\t"<<"Student Name :"<<s2.name<<endl;
}