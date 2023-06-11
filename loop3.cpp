#include<iostream>
using namespace std;
int main()
{
    int n, x,y,i=1,j=2,k=1,sum=0 ,a=0, b=0;
    cout<<"enter no for output";
    cin>>n;
    cout <<"enter odd no ";
    cin>>x;
    cout<<"enter even no";
    cin>>y;
    while (i<=n)
    {
      sum=sum+i;
      i=i+1;
    }
    cout<<"sum of natural numbers are="<<sum;
    while(k<=x)
    {
      sum=sum+k;
      k=k+1;
    }
    a=a+k;
    cout <<"sum of odd numbers are "<<a;
    while (j<=y)
    {
      sum=sum+j;
      j=j+2;
    }
    b=b+j;
    cout<<"sum of even no are"<<b;
    return 0;
}