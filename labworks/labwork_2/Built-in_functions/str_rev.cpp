#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    //program for string reverse
    string str1;
    cout<<"\nenter any string to be reversed";
    cin>>str1;
    reverse(str1.begin(),str1.end());
    cout<<"\nthe reversed string is: "<<str1;
}