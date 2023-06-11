#include<iostream>
using namespace std;
void prime(int n)
{
    int i=2;
     while(i<n)
     {
        if(n%i==0)
        {
            
            cout<<"not prime";
            break;
        }
        i=i+1;
     }
     if(i==n)
     cout<<"prime no";
}
void primen(int n)
{

int j=2;
    while(j<=n)
    {
       int  i=2;
        while(i<j)
        {
            if(j%i==0)
            {
               
                //cout<<j;
                break;
            }
            i=i+1;
        }
        if(i==j)
        {
            cout<<"prime",j;
        }
    j=j+1; }   }
int main()
{
int choice ,r ,s;
cout<<"\n Enter your choice::";
cout<<"\n1, prime no \n2. N prime no";
cin>>choice;
switch(choice)
{
    case 1:
    cout<<"enter no";
    cin>>r;
    prime(s);
    cout<<s;
    break;
    case 2:
    cout<<"enter no";
    cin>>r;
    primen(s);
    cout<<s;
    break;
    default :
    cout<<"invalid choice";
}

}

