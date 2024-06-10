#include<iostream>
using namespace std;

int main()
{
  int num;
  cout<<"Enter number : ";
  cin>>num;

  int n = num;
  int count = 0;



  while(n%10!=0)
  {
    // int r = n%10;
    count++;

    n/=10;

  }
  cout<<"The number of digits in a nummber : "<<count<<endl;

  int square = num*num;

  cout<<"Square of a number is : "<<square<<endl;
  
}