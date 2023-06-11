#include<iostream>
using namespace std;
int main()
{
    int n,r,s,c,i ,a=0,b=1;c;
    cin>>n;
  for(i=2;i<n;i++)
  {
    for(c=2;i<c;c++)
    {
      if(c%i==0)
      {
        cout<<"not prime"<<c;
        break;
      }
      if(c==i)
      {
        cout<<"prime "<<c;
      }
    }
  }
return 0;
} 