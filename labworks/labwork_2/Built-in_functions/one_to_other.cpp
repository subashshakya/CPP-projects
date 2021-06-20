#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    //program for string interchange
    char str1[20],str2[20];
    cout<<"\nEnter a string for interchange:";
    cin>>str1;
    strcpy(str1,str2);
    cout<<"\nThe interchanged out is: "<<str2;
}