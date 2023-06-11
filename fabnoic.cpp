#include<iostream>
using namespace std;
int main()
{
    int n,a=0 ,b=1,c,i;
    cout<<"enter the value of n";
    cin>>n;
    cout<<a<<b;
    for(i=3;i<=n;i++) ;
    {
        c=a+b;
        a=b;
        b=c;
        if(i%2==0)
        {
            cout<<c;

        }
    }
}