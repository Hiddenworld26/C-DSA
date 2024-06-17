#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of string : \n";
    cin>>n;
    string str;
    cout<<"Enter string \n";
    cin>>str;
    int count =0;
    for(int i=0;i<n;i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            count++;
        }
    }
    cout<<"Consonants are : "<<(n-count);
}