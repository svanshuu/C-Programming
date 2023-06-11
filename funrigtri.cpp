#include<iostream>
using namespace std;
void rhs1(int n)
{
    int r,s,c;
    for(r=1;r<=n;r++)
    {
        int s=n-r;
        while(s){
        cout<<" ";
        s=-1;}
        for(c=1;c<=r;c++)
        {
            cout<<r;
        }
    cout<<endl;
    }
}
void rhs2(int n)
{
        int r=1,i=1;
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
            cout<<i;
            i=i+1;
            c=c+1;
        }
        r=r+1;
        cout<<endl;
   }
}
void rhs3(int n)
{
     int r=1;
    while(r<=n)
    {
    int space=r-1;
    while(space)
    {
cout<<" ";
space=space-1;
    }int col=r;
    while(col<=n)
    {
        cout<<col;
        col=col+1;
       // star =star-1;
    }r=r+1;
    cout<<endl;
    }
}
void rhs4(int n)
{
     int r=1;
    while(r<=n)
    {
         int s=n-r;
         while(s){
         cout<<" ";
         s=s-1;
    }int c=1;
    while(c<=r)
    {
        cout<<c;
        c=c+1;
    }
    cout<<endl;
    r=r+1;
    }
}
int main()
{
    int n,m,o,p,q,ask;
    cout<<"enter your choice";
    cout<<"\n1.rhs1\n2rhs2\n3rhs3";
    cin>>ask;
    switch(ask)
    {
        case 1:
        cout<<"enter value";
        cin>>n;
        rhs1(n);
        break;
        case 2:
        cout<<"enter value";
        cin>>m;
        rhs2(m);
        break;
        case 3:
        cout<<"enter value";
        cin>>o;
        rhs3(o);
        break;
        case 4:
        cout<<"enter value";
        cin>>p; 
        rhs4(p);
        break;
        default:
        cout<<"IVALID CHOICE";
        
    }
    return 0;
}