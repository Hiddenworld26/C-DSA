#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the size of string : \n";
cin>>n;
string str;
cout<<"Enter string : \n";
cin>>str;
for(int i=0;i<n;i++)
{
    if(i%2!=0)
    str[i]='#';
}
cout<<str;
}