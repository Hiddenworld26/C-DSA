#include<iostream>

using namespace std;

#include<string>

int main()
{
   string s;
   cout<<"Enter String : ";
  getline(cin,s);
   
   cout<<"String is : "<<" ";
   cout<<s;

   cout<<endl;

   int n = s.length();

   int count = 0;

   for(int i = 0 ; s[i]!='\0' ; i++)
   {
      
      if(n==1)
      {
        count = 1;
        break;
      }

      if(n==2)
      {
        if(s[0]!=s[1])
        {
            count = 1;
            break;
        } 
        }

        if(i==0)
        {
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==n-1)
        {
            if(s[i]!=s[i-1]) count++;
        }

        
        else if((s[i]!=s[i+1]) && (s[i]!=s[i-1]))
        {
            count++;
        }

     
   }
   

   cout<<count;
}
