#include<iostream>
using namespace std;
class student
{
    public:
    student(int rno, char name[20])
    {
        cout<<"Roll Number :"<<rno<<endl<<"student Name :"<<name<<endl;
    }

};
int main()
{
    student s(1,"XYZ");
}