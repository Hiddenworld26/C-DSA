#include<iostream>
using namespace std;

int main()
{
    int n  ;
    cout<<"Enter the number of rows : ";

    cin>>n;

    int nsp = 1;
    int nst1 = (n-1);

    int nst2=(n-1);

    for(int i = 1;i<=(2*n-1);i++)
    {
        cout<<"* ";
    }
    cout<<endl;

    for(int i = 1;i<=(2*n-3);i++)
    {
          for(int j = 1 ; j<=nst1;j++)
          {
            cout<<"* ";
          }
          if(i<=(n-2)) nst1--;
          else nst1++;

          for(int k = 1;k <= nsp ; k++)
          {
            cout<<"  ";
          }
          if(i<=(n-2)) nsp+=2;
          else nsp-=2;

          for(int p = 1 ; p<=(nst2);p++)
          {
            
            cout<<"* ";
          }
          if(i<=(n-2)) nst2--;
          else nst2++;



          cout<<endl;

          


    }

    
    for(int i = 1;i<=(2*n-1);i++)
    {
        cout<<"* ";
    }



    
}