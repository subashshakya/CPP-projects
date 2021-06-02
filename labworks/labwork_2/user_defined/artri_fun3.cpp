#include<iostream>

using namespace std;

int getArea()
{
    int l,b,area;
    cout<<"\nenter the length of the triangle:";
    cin>>l;
    cout<<"\nenter the breadth of the triangle:";
    cin>>b;
    area=0.5*l*b;
    return area;
};

int main()
{
    int AREA;
    AREA=getArea();
    cout<<"\nthe area of the given triangle is: "<<AREA;
}