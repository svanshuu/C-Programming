#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter any no n";
   cin>>n;
   int r=n ,i=1;
   while(i<=n)
   {
      int s=n-i+1;
      while(s)
      {
         cout<<r;
        s= s-1;
      } cout<<endl;
     r=r-1;
   }
   return 0;
}