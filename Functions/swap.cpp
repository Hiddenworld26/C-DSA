#include<iostream>

using namespace std;

int main()
{ 
    //Method - 1 With the use of temp variable

    int n1 ;
    cout<<"Enter the number of 1st number : ";
    cin>>n1;

    int n2 ;
    cout<<"Enter the number of 2nd number : ";
    cin>>n2;

    
    cout<<"Before swapping the value of numbers are  : "<<n1<<" "<<n2<<endl;


    // int temp = n1;
    // n1 = n2;
    // n2 = temp;

    // cout<<"After swapping the value of numbers are  : "<<n1<<" "<<n2;


    //Method - 2 Without the use of temporary variable

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;


    //Method - 3
    // n1 = n1 * n2;
    // n2 = n1 / n2;
    // n1 = n1 / n2;


    cout<<"After swapping the value of numbers are  : "<<n1<<" "<<n2;
}