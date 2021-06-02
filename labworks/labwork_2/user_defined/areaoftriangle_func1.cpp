#include<iostream>

using namespace std;

void getArea(int l,int b)
{
    int area=0.5*l*b;
    cout<<"\nthe area of triangle is:"<<area;
};

int main()
{
    int L,B,AR;
    cout<<"\nenter the length of the trianle:";
    cin>>L;
    cout<<"\nenter the breadth of the triangle:";
    cin>>B;
    getArea(L,B);
}