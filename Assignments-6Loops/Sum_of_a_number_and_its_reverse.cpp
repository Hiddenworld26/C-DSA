#include<iostream>

using namespace std;

int main()
{
    int num ;

    cout<<"Enter the number : ";

    cin>>num;

    int n = num;

    


    int rnum = 0;

    while(n>0)
    {
       int r = n%10;

       n/=10; 
      rnum = rnum*10 + r;
       
    }

    cout<<"Number is : "<<num<<endl;
    
    cout<<"Reverse number is : "<<rnum<<endl;

    cout<<"Sum of number and reverse number is : "<<(num+rnum)<<endl;
}