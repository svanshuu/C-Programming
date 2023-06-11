#include<iostream>
using namespace std;
void patt(int n)
{
    int r,c;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            cout<<r;
        }
        cout<<endl;
    }
}
void patte(int n)
{
    int r,c;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}
void Apatt(int n)
{
    char r,c;
    for(r='A';r<=n;r++)
    {
        for(c='A';c<=n;c++)
        {
            cout<<r;
        }
        cout<<endl;
    }
}
void Bpatte(int n)
{
    char r,c;
    for(r='A';r<=n;r++)
    {
        for(c='A';c<=n;c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}
int main()
{
    int n,m,choice;
    char o,p;
    cout<<"\n1.111 \n 2.123 \n3.AAA \n4.ABC";
    cin>>choice;
  switch(choice){
    case 1:
     cout<<"enter no";
     cin>>n;
     patt(n);
     break;
    case 2:
     cout<<"enter no";
     cin>>m;
     patte(m);
     break;
    case 3:
     cout<<"enter alpabet";
     cin>>o;
     Apatt(o);
     break;
    case 4:
     cout<<"enter alapbeat";
     cin>>p;
     Bpatte(p);
    default :
    cout<<"invalid choice";
  }
}