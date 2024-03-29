#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[2][3]={1,26,3,4,5,6};
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    cout<<"Maximum element is : "<<max<<endl;
    cout<<"Minimum element is : "<<min;
}