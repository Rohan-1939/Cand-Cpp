#include<iostream>
using namespace std;
class book
{  
public: 
    int id;
    char name[20];
    int price;
};
int main()
{
    book b[5];
    int i;
    cout<<"Enter id, name and price of 5 books"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>b[i].id>>b[i].name>>b[i].price;
    }
    for(i=0;i<5;i++)
    {
        cout<<b[i].id<<"\t"<<b[i].name<<"\t"<<b[i].price<<endl;
    }
}