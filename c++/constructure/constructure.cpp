#include<iostream>
using namespace std;
class student
{
    public:
    int rno;
    char name[20];
    student()
    {
        cout<<"Enter roll no. and name of student"<<endl;
        cin>>rno>>name;
        cout<<"Roll Number is :"<<rno<<"\t"<<"Student's Name :"<<name<<endl;
    }
};
int main()
{
    student s;
}