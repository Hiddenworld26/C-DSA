#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;


    int sum = 0;


    while(n>0)
   {
          int d = n%10;
          if(d%2 == 0)
          {
            sum+=d;
          }
          n = n/10;
    }

    cout<<"Sum of even digits are : "<<sum;

    
}