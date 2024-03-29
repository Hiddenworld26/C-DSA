#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string "<<endl;
    cin>>str;

    int num=0;
    int i=str.length()-1;
    int j=0;
    while(i>=0)
    {
        
       
       num+= (str[i]-'0')*pow(10,j);
      j++;
       i--;
    }
    cout<<"Number : "<<num;

}