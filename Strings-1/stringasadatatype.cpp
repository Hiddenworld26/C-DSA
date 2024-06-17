#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string you want : "<<endl;
    getline(cin,str);
    //cin>>str;//Only works if string has no space in between
    cout<<str;

}