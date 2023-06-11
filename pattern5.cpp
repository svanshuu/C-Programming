#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter any no..";
    cin >>n;
    
    cout<<endl;
    }int r=1;
    while(r<=n)
    {
    int c=1;
    while(c<=r)
    {
    cout<<r-c+1;
    c=c+1;
    }
    r=r+1;
    return 0;
}