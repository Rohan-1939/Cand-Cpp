#include<iostream>
using namespace std;
class students
{
    public:
        int rno;
        char name[20];
        void display()
        {
            cout<<"Roll Number :"<<rno<<endl;
            cout<<"Student Name :"<<name<<endl;
        }
};
int main()
{
    students s1={1,"AAA"};
    s1.display();
}