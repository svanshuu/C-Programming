#include<iostream>
using namespace std;
void pattA(int n)
{
    char r,c;
    for(r='A';r<=n;r++)
    {
        for(c='A';c<=r;c++)
        {
            cout<<r;
        }
        cout<<endl;
    }
}
void pattB(int n)
{
    char r,c ,m ='A';
    for(r='A';r<=n;r++)
    {
        for(c='A';r<=c;c++)
        {
            cout<<m;
            m=m+1;
        }
        cout<<endl;
    }
}
void pattC(int n)
{
    char r,c;
     for(r='A';r<=n;r++)
    {
        for(c='A';r<=c;c++)
        {
            cout<<r-c+1;}
            cout<<endl;
            }
}
void pattD(int n)
{
    char r,c;
    for(r='A';r<=n;r++)
    {
        for(c='A';c<=r;c++)
        {
            cout<<c;
        }
        cout<<endl;}
}
void pattE(int n)
{
    char r='A' ;
    while( r<=n)
    {
        char c='A' ,col=r;
        while(c<=r)
        {
        cout<<col;
        col=col+1;
        c=c+1;
        }
    cout<<endl;
    r=r+1;}

}
int main()
{
    int choice;
    char a,b,c,d,e;
    cout<<"\n1.pattern A\n 2patternB \n3.patternC\n4.patternD\n5.patternE";
    cin>>choice;
    switch(choice)
    {
        case 1:
         cout<<"enter value";
         cin>>a;
         pattA(a);
         break;
        case 2:
        cout<<"enter value";
        cin>>b;
        pattB(b);
        break ;
        case 3:
        cout<<"enter value";
        cin>>c;    
        pattC(c);
        break;
        case 4:
        cout<<"enter value"; 
        cin>>d;
        pattD(d);
        break;
        case 5:
        cout<<"enter value";
        cin>>e;
        pattE(e);
        break;
        default:
        cout<<"invalid";
    }
}