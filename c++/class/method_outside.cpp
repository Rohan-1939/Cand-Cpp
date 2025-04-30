#include<iostream>
using namespace std;
class employee
{
    public:
    char name[20];
    double salary;
    void display();
};
void employee::display()
{
    cout<<"enter name and salary of Employee"<<endl;
    cin>>name>>salary;
    cout<<"Employee Name is : "<<name<<"\t"<<"Employee Salary is : "<<salary<<"\t"<<endl;
}
int main()
{
    employee e;
    e.display();
    
}