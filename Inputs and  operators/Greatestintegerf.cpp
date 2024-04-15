#include<iostream>
using namespace std;
int main()
{
    float number ;
    cout<<"Enter number : \n";
    cin>>number;

    if(number>=0)
    {
        cout<<"Greatest integer of number is "<<(int)number;
    }
    else
    {
        if((number-(int)number)==0)
        {
            cout<<"Greatest integer of number is "<<number;
        }
        else
        {
            cout<<"Greatest integer of number is "<<((int)number-1);
        }
        
    }
}