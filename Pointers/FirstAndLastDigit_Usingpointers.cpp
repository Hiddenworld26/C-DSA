#include<iostream>

using namespace std;

int main()
{
    int n ;

    cout<<"Enter number : ";
    cin>>n;

    int firstdigit , lastdigit;

    lastdigit = n%10;
    
    int r = 0;

    if(n>0)
    {
      while(n>0)
    {
       r = n % 10;
       n = n/10;
    }
    }

    else
    {
        n = - n;
        while(n>0)
    {
       r = n % 10;
       n = n/10;
    }
    }

    

    firstdigit = r;

    cout<<"Last Digit : "<<lastdigit<<endl;
    cout<<"First Digit : "<<firstdigit<<endl;



}