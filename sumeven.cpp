#include<iostream>
using namespace std;
int main()
{
    int n,i=2,sum=0;
    cout<<"enter no ";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<"sum of even no is"<<sum;
    return 0;

}