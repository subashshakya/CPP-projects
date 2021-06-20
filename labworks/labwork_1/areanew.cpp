#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    //with maths header
    float a,b,c,s,area;
    cout<<"enter the first side of the triangle:";
    cin>>a;
    cout<<"enter the second side of the triangle:";
    cin>>b;
    cout<<"enter the thrid side of the triangle:";
    cin>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"the area of the required triangle is:"<<area;
}