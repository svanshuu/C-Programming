#include<iostream>
using namespace std;
int main()
{
    int n ,i=0 ,f=1;
    cout<<"enter no";
    cin>>n;
    while(i<=n)
{
   i=i+1 ;
   f=f*i;
cout<<"\nfactorial is  = "<<f;
}
return 0;
}