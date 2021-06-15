#include<iostream>

using namespace std;

class Employee{
private:
    int MemID;
    char Name[20];
    double Salary;

public:
    void dataInput()
    {
        cout<<"\nenter your employee ID:";
        cin>>MemID;
        cout<<"\nenter your name:";
        cin>>Name;
        cout<<"\nenter your salary";
        cin>>Salary;
    }

    void DisplayTab()
    {
        
        cout<<"\nname:  "<<"\t"<<Name<<"\tmember id:\t"<<MemID<<"\tsalary:\t"<<Salary;
    }
};

int main()
{
    Employee e1[5];
    int p;
    for(p=0;p<5;p++)
    {
        e1[p].dataInput();
    }

    int j;
    for(j=0;j<5;j++)
    {
        e1[j].DisplayTab();
    }
}