#include<iostream>

using namespace std;

int gcf(int a, int b)
{
   int gcf = 1;

   for(int i = min(a,b) ; i>=1 ; i--)
   {
    if((a%i==0)&&(b%i==0))
    {
        gcf = i;
        break;
    }
   }

   return gcf;
}


int main()
{
    
    int n1 , n2 ;

    cout<<"Enter the first number : ";
    cin>>n1;

    cout<<"Enter the second number : ";
    cin>>n2;

    cout<<"Greatest Common Divisor of "<<n1<<" and "<<n2<<" is : "<<gcf(n1,n2);

}