#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : \n";
    cin>>n;
    bool flag = true;
    for(int i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
           flag = false;
           break;  
        }
    }
    if(n==1)
    {
        cout<<"1 is neither prime nor composite"<<endl;
    }
    else if(flag==false)
    {
        cout<<n<<" is composite number"<<endl;
    }
    else{
         cout<<n<<" is prime number"<<endl;
    }
}
