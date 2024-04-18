#include<iostream>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the 1st coordinate : ";
    cin>>x1>>y1;

    cout<<"Enter the 2nd coordinate : ";
    cin>>x2>>y2;

    cout<<"Enter the 3rd coordinate : ";
    cin>>x3>>y3;

    int slope12 = (y2-y1)/(x2-x1);

    int slope23 = (y3-y2)/(x3-x2);

    if(slope12 == slope23)
    {
        cout<<"Three points lie on a straight line";
    }
    else
    {
        cout<<"Three points do not lie on a straight line";
    }

}