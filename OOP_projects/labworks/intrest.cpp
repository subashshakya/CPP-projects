#include<iostream>


//simple intrest with oop
using namespace std;

class Intrest{
private:
    double Principle;
    double Time;
    double Rate;

public:
    void DataIn()
    {
        cout<<"\nenter your principle amount:";
        cin>>Principle;
        cout<<"\nenter the time you have kept the money in the bank: ";
        cin>>Time;
        cout<<"\nenter your rate:";
        cin>>Rate;
    }

    double Calculation()
    {
        return ((Principle*Time*Rate)/100);
    }
};

int main()
{
    Intrest i1;
    double out;
    i1.DataIn();
    out=i1.Calculation();
    cout<<"\nthe calculated amount is: "<<out;
}