#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
   int temp = x;
   x=y;
   y=temp;
}
int main()
{
  int n1;
  int n2;
  cout<<"enter the variable of twwo numbers are : ";
  cin>>n1>>n2;

  cout<<"Before swapping the value of variables are : "<<n1<<" and "<<n2<<endl;

  swap(n1,n2);

  cout<<"After swapping the value of variables are : "<<n1<<" and "<<n2<<endl;


}