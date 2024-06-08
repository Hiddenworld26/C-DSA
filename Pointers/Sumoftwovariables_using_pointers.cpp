#include<iostream>

using namespace std;

int main()
{
    int n1,n2;
    
    int *p1=&n1 , *p2=&n2;

    //syntaax Problem :- int* p1=&n1 , *p2=&n2;

    cout<<"Enter the value of number 1 : ";
    cin>>*p1;

    cout<<"Enter the value of number 2 : ";
    cin>>*p2;

    int sum ;

    int *p3 = &sum;

    *p3 = *p2 + *p1;

    cout<<"Sum of two numbers is : "<<sum;
    
}