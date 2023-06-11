#include<iostream>
using namespace std;
int main()
{
    int n,r,c,j,i;
    cout<<"enter the input";
    cin>>n;
    for(r=n;0<=r;n-1)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            cout<<r;
        }
        for(c=1;c<=n;c++)
        cout<<i;
        cout<<endl;
    }
}