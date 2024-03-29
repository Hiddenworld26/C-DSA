#include<iostream>
using namespace std;
int main()
{
    int mn;
    cout<<"Enter the month number :\n";
    cin>>mn;
    switch((mn<=7)&&(mn%2!=0))
    {
        case 1:
        {
            cout<<"31"<<endl;
        }
    }
    switch((mn>=8)&&(mn%2==0))
    {
        case 1:
        {
            cout<<"31"<<endl;
        }
    }
    switch((mn==4)||(mn==6)||(mn==9)||(mn==11))
    {
        case 1:
        {
            cout<<"30"<<endl;
        }
    }
    switch((mn==2))
    {
        case 1:
        {
            cout<<"28"<<endl;
        }
    }
    
}
