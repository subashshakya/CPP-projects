#include<iostream>

using namespace std;

class Distance
{
private:
    double Feet,Inch;
    
public:
    //default constructor
    Distance()
    {
        Feet=0;
        Inch=0;
    }

    void getDistance()
    {
        cout<<"\nEnter the distance in Feet: ";
        cin>>Feet;
        cout<<"\nEnter the distance in Inches: ";
        cin>>Inch;
    }
    //friend function is declared with operator overloading
    friend Distance operator +(Distance d1,Distance d2);
    
    //display function is used to access the private members of the objects used  
    void display();
};

Distance operator +(Distance d1,Distance d2)
{
    //friend function will NOT call the object before the operator implicitly
    Distance d3;
    d3.Feet=d1.Feet+d2.Feet;
    d3.Inch=d1.Inch+d2.Inch;
    return d3;
};

void Distance::display()
{
    cout<<"\nThe value of feet and inches are: "<<Feet<<" & "<<Inch;
    //Feet and Inch are used as it can access the private info
};

int main()
{
    Distance d1,d2,d3;
    d1.getDistance();
    d2.getDistance();
    //here operator overloading is done
    d3=d1+d2;
    d3.display();
}