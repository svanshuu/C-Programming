#include<iostream>
using namespace std;
void tri1(int n)
{
    int r,c;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<r;
        }
        cout<<endl;
    }
}
void tri2(int n)
{
    int r,c;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}
void tri3(int n)
{
   int r,c,count =1;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<count;
            count=count+1;
        }
        cout<<endl;
    } 
}
void tri4(int n)
{
   int r,c;
   for(r=n;1<=r;r--){
    for(c=1;c<=n;c++)
    {
        cout<<r;
    }
    cout<<endl;
   } 
}
void tri5(int n)
{
     int r=1;
    while(r<=n)
    {
    int c=1;
    while(c<=r)
    {
    cout<<r-c+1;
    c=c+1;
    }
    r=r+1;
cout<<endl;
}}
int main()
{
    int p,q,r,s,t,u;
    cout<<"1. tri1\n2.tri2 \n3 tri3 \n4 tri4\n5 tri5";
    cin>>p;
    switch (p)
    {
    case 1:
        cout<<"enter value";
        cin>>q;
        tri1(q);
        break;
    case 2:
        cout<<"enter value";
        cin>>r;
        tri2(r);
        break;
    case 3:
        cout<<"enter value";
        cin>>s;
        tri3(s);
        break;
    case 4:
    cout<<"enter value";
    cin>>t;
    tri4(t);
    break;
    case 5:
     cout<<"enter the value";
     cin>>u;
     tri5(u);
     break;
    default:
    cout<<"invalid choice";
        break;
    }
}