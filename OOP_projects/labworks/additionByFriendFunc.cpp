//to add 2 private data of two different classes

#include<iostream>

using namespace std;

class SecondDataMember;

class FirstDataMember
{
private:
    double var1;

public:
    void getData()
    {
        cout<<"\nEnter any number: ";
        cin>>var1;
    }

    //declared friend funtion is just a prototype
    friend double addNum(FirstDataMember d1,SecondDataMember d2);
};

class SecondDataMember
{
private:
    double num2;
public:
    void getSecData()
    {
        cout<<"\nEnter any other number: ";
        cin>>num2;
    }
    friend double addNum(FirstDataMember d1,SecondDataMember d2);
};

double addNum(FirstDataMember d1,SecondDataMember d2)
{
    //since friend function gives to private member of the classes var1 and num2 can be accesed
    return d1.var1+d2.num2;
}

int main()
{
    FirstDataMember d1;
    SecondDataMember d2;
    d1.getData();
    d2.getSecData();
    double sum=addNum(d1,d2);
    cout<<"\nthe sum of the given numbers is: "<<sum;
}