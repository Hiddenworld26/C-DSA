#include<iostream>
using namespace std;

int main()
{
    int x,y;

    cout<<"Coordinates : "<<endl;

    cout<<"Enter the x-coordinate : ";
    cin>>x;

    cout<<"Enter the y-coordinate : ";
    cin>>y;

    if((x==0)&&(y==0))
    {
        cout<<"Lies on the origin!";
    }

    else if(x==0)
    {
        cout<<"Lies on Y-Axis!";
    }
    else if(y==0)
    {
        cout<<"Lies on X-axis!";
    }
    else
    {
        cout<<"Lies anywhere in the Space";
    }
    

}