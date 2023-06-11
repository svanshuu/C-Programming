#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter  no n";
    cin>>n;
    int row=1;
    while(row<=n)
    {
         int s=n-row;
         while(s){
         cout<<" ";
         s=s-1;
    }int c=1;
    while(c<=row)
    {
        cout<<c;
        c=c+1;
    }
    int r=row-1;
    while(r){
    cout<<r;
    r=r-1;
    }
    row=row+1;
    cout<<endl;

    }

   return 0; 
   }