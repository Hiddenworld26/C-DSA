#include<iostream>
using namespace  std;
int main()
{
    int a,b,c;
    cout<<"Enter the value  of 3 numbers : \n";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is largest number"<<endl;
        }
        else
        {
            cout<<c<<" is largest number"<<endl;
        }
    }
    else
    {
         if(b>c)
        {
            cout<<b<<" is largest number"<<endl;
        }
        else
        {
            cout<<c<<" is largest number"<<endl;
        }
        /*
         if((a>b)&&(a>c))  same  for all 3 numbers
         {
            cout<<a<<" is largest number"<<endl; 
         }
        */
    }




    
}