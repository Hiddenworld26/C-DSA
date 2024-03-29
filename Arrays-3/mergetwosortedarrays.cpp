#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
  //1st vector
  int m;
  cout<<"Enter the size of 1st vector : "<<endl;
  cin>>m;
  vector<int>v1(m);
  cout<<"Enter the element of 1st vector : "<<endl;
  for(int i=0;i<m;i++)
  {
    cin>>v1[i];
  }
  
  //2nd vector
  int n;
  cout<<"Enter the size of 2nd vector : "<<endl;
  cin>>n;
  vector<int>v2(n);
  cout<<"Enter the element of 2nd vector : "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>v2[i];
  }
  

  int ptr1=0;
  int ptr2=0;

  vector<int>merge;
  while((ptr1<m)&&(ptr2<n))
  {
    
    if(v1[ptr1]>v2[ptr2])
    {
     merge.push_back(v2[ptr2]);
     ptr2++;
    }
    else if(v1[ptr1]<v2[ptr2])
    {
     merge.push_back(v1[ptr1]);
     ptr1++;
    }
    else if(v1[ptr1]==v2[ptr2])
    {
        merge.push_back(v1[ptr1]);
        merge.push_back(v2[ptr2]);
        ptr1++;
        ptr2++;

        
    }

    
  }

  if(ptr1==(m))
    {
         for(int p=ptr2;p<n;p++)
         {
            merge.push_back(v2[p]);
         }
    }
    if(ptr2==(n))
    {
         for(int p=ptr1;p<m;p++)
         {
            merge.push_back(v1[p]);
         }
    }
  cout<<"Printing the sorted arrays : "<<endl;
  for(int i=0;i<merge.size();i++)
  {
    cout<<merge[i]<<" ";
  }


}