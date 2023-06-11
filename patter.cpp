#include<iostream>
using namespace std;
int main()
{
    int n,r=1;
    cin>>n;
    while(r<=n)
    {
        int cl=r,i=1;
        while(cl<=n)
        {
            cout<<i;
            i=i+1;
            cl=cl+1;
        }
        int star=r-1;
        while(star)
        {
            cout<<"*";
            star=star-1;

        }
        int s=r-1;
        while(s)
        {
            cout<<"*";
            s=s-1;

        }
        int c=n-r+1;
        while(c)
        {
            cout<<c;
            c=c-1;
        }
        cout<<endl;
        r=r+1;
    }
}