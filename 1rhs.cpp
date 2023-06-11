#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter any no,";
    cin>>n;
    int r=1;
    while(r<=n)
    {
        int s=n-r;
        while(s)
        {
        cout<<" ";
        s=s-1; 
    }
    int c=1;
    while(c<=r)
    {
        cout<<r;
        c=c+1;

    }
    cout<<endl;
    r=r+1;
    }
}