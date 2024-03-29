#include<iostream>
using namespace std;
//  void reverse(int arr[],int n)
//    {
//            int low=0;
//            int high=n-1;
//            while(low<high)
//            {
//                     int temp=arr[low];
//                     arr[low]=arr[high];
//                     arr[high]=temp;
//                     high--;
//                     low++;
//            }
//     }
int main()
{

   
    int m;
    cout<<"Enter the value of m: \n";
    cin>>m;

    int a[m][m];

    
     cout<<"Enter elements of array : \n";
     for(int i=0;i<m;i++)
    {
       for(int j=0;j<m;j++)
       {
       cin>>a[i][j];
       }
    }

      cout<<"Printing elements of array : \n";
     for(int i=0;i<m;i++)
    {
       for(int j=0;j<m;j++)
       {
       cout<<a[i][j]<<" ";
       }
       cout<<endl;
    }
  
    
     for(int i=0;i<m;i++)
    {
       for(int j=i;j<m;j++)
       {
           int temp= a[i][j];
           a[i][j]=a[j][i];
           a[j][i]= temp;
          


       }
    }

    for (int i =0;i<m;i++)
    {
          int low=0;
          int high=m-1;
          while(low<high)
          {
            int tempo=a[i][low];
            a[i][low]=a[i][high];
            a[i][high]=tempo;
            low++;
            high--;
          } 
    }

      cout<<"Printing transpose of array : \n";
     for(int i=0;i<m;i++)
    {
       for(int j=0;j<m;j++)
       {
       cout<<a[i][j]<<" ";
       }
       cout<<endl;
    }


}