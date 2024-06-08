#include<iostream>

using namespace std;

void swap(int *p1,int *p2)
{
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;

}

int main()
{
  int n1;
  int n2;
  cout<<"enter the variable of twwo numbers are : ";
  cin>>n1>>n2;

  cout<<"Before swapping the value of variables are : "<<n1<<" and "<<n2<<endl;

  int *p = &n1;

  int *q = &n2;

  swap(p,q);


  cout<<"After swapping the value of variables are : "<<n1<<" and "<<n2<<endl;


}