#include<iostream>
using namespace std;
class book
{
    public:
        int id;
        char name[20];
        double price;
        void getinfo()
        {
            cin>>id>>name>>price;
        }
        void printinfo()
        {
            cout<<id<<"\t"<<name<<"\t"<<price<<endl;
        }
};
int main()
{
    book b[5];
    int i;
    cout<<"Enter id, name and price of 5 books"<<endl;
    for(i=0;i<5;i++)
    {
        b[i].getinfo();
    }
    for(i=0;i<5;i++)
    {
        b[i].printinfo();
    }
}