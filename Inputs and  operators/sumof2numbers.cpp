#include<iostream>
using namespace std;
int main()
{
    int  n1,n2;
    int sum;
    sum=n1+n2;  //if we'll mention here this line,it will take garbage value
    cout<<"Enter the value of number 1 : \n";
    cin>>n1;
    cout<<"Enter the value of number 2 : \n";
    cin>>n2;
    sum=n1+n2; 
    cout<<"Value of sum is : "<<sum;

}