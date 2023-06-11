#include<iostream>
using namespace std;
int main()
    {
        int n ;
        cout<<"enter any no";
        cin>>n;
        int r=1;
        while(r<=n)
        {
          int  space=n-r+1;
          while(space)
          {
          cout<<"* ";
          space=space-1;
          }
          cout<<endl;
          r=r+1;
         }
          
  return 0;
    }

