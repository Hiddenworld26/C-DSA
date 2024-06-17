#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string : "<<endl;
    getline(cin,str);
    reverse(str.begin()+1,str.begin()+5);
    cout<<str<<endl;


}