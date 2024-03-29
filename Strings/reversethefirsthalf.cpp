#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string : "<<endl;
    getline(cin,str);
    int len=str.length();
    if(len%2==0)
    {
        reverse(str.begin(),str.begin()+len/2);
        cout<<str;
    }
    else{
        cout<<"No reverse \n";
    }


}