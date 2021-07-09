//Demonsration of HYBRID INHERITACE

#include<iostream>

using namespace std;

//FirstClass is declared as a vase class
class FirstClass
{
    public:
    FirstClass()
    {
        cout<<"\nFirst class is called.";
    }
};

//SecondClass Inherits FirstClass
class SecondClass:public FirstClass
{
    public:
    SecondClass()
    {
        cout<<"\nSecond Class is called.";
    }
};

//Third class can also be considered as a base class as it inherits no other class
class ThirdClass
{
    public:
    ThirdClass()
    {
        cout<<"\nThird class is called.";
    }
};

//Fourth class inherits both FirstClass and ThirdClass
class FourthClass:public FirstClass,public ThirdClass
{
    public:
    FourthClass()
    {
        cout<<"\nFourth class is called.";
    }
};

int main()
{
    SecondClass s1;
    FourthClass s2;
    return 0;
}


//OUTPUT order: 
//When s1 is called: FirstClass is executed first then SecondClass comes in action

//When s2 is called: Firstclass is processed first then ThirdClass is executed and lastly FourthClass is called
