#include<iostream>

using namespace std;

int getArea(int l,int b)
{
    int ar;
    ar=0.5*l*b;
    return ar;
};

int main()
{
    int L,B,AR;
    cout<<"\nenter the length of the triangle:";
    cin>>L;
    cout<<"\nenter the breadth of the riangle:";
    cin>>B;
    AR=getArea(L,B);
    cout<<"\nthe area of the triangle is:"<<AR;
}