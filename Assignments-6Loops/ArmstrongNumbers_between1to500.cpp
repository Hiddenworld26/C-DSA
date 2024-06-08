#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num;

    cout<<"Enter number : ";
    cin>>num;

    int n = num;

    int sum = 0;

    while(n>0)
    {
        int digit = n%10;
        sum += (digit*digit*digit);
        n/=10;
    }

    

    if(num == sum) cout<<"Number is armstrong"<<endl;

    else cout<<"Number is not armstrong"<<endl;
}