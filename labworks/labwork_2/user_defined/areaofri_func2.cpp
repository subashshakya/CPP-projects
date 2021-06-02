#include<iostream>

using namespace std;

void getArea()
{
    int l,b,area;
    cout<<"\nenter the length of the triangle:";
    cin>>l;
    cout<<"\nenter the breadth of the triangle:";
    cin>>b;
    area=0.5*l*b;
    cout<<"\nthe area of given triangle is:"<<area;
};

int main()
{
    getArea();
}