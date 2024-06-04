#include<iostream>
using namespace std;

void star(int n)
{
  for(int i = 1;i<=n ; i++)
  {
    for(int j = 1;j<=i;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
  }
}
int main()
{
  int n ;
  cout<<"Enter the value of n 1st timee : ";
  cin>>n;
  star(n);

  cout<<"Enter the value of n 2nd time : ";
  cin>>n;
  star(n);

  cout<<"Enter the value of n  3rd time: ";
  cin>>n;
  star(n);
}