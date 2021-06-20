#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    //length of string
    char inin[100];
    int len;
    cout<<"\nenter any string: ";
    cin>>inin;
    len=strlen(inin);
    cout<<"\nThe length of the string is: "<<len;
};