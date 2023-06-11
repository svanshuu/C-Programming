#include<iostream>
using namespace std;
void even(int i)
{
  int r=2;
  while(r<=i)
  {
    cout<<r;
    r=r+2;
  }
}
void odd (int n)
{
  int i;
  for(i=1;i<=n;i++)
  {
    cout<<i;
    i=i+1;
  }
}
void fact(int n)
{
  int i=0,fac=1;
  for(i=0;i<=n;i++)
  {
    
    fac=fac*i;
  }
  cout<<fac;
}
int main()
{
  int choice,n,f,g;
  cout<<"enter your choice";
  cout<<"1.Even 2.Odd 3. Factorial";
  cin>>choice;
  switch(choice)
  {
    case 1:
    cout<<"enter  even no..";
    cin>>n;
    even(n);
    break;
    case 2:
    cout<<"enter odd no";
    cin>>f;
    odd(f);
    break;
    case 3:
    cout<<"enter any no";
    cin>>g;
    fact(g);
    break;
    default:
    cout<<"wrong choice";
  }
}