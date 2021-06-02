#include<iostream>
#include<cstring>

using namespace std;


int main()
{
    char str1[20],str2[20];
    cout<<"\nEnter any  string:";
    cin>>str1;
    cout<<"\nenter any other string:";
    cin>>str2;
    strncat(str1,str2,19);
    cout<<"\nthe concatinated string is:"<<str1;
}