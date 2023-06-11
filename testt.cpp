#include<iostream>
using namespace std;
int main()
{
    int choice ,n;
    cout<<"Enter any choice";
    cout<<"\n1)AB \n2)CD";
    cin>>choice;
    if(choice==1)
    {
        cout<<"enter the value";
    }
    else
    {
        cout<<"enter the value";
        cin>>n;
        int s=n ,r=1 ;
        while(s<=n)
        {
            cout<<" ";
            while(r<=n)
            {
            int c=1 ,co=n-r+1;
            int ro=n-1;
            while(r<n)
            {
                int cn=1;
                while(cn<r)
                {
                cout<<cn;
                cn=cn+1;
                }
                ro=ro+1;
            while(c<=r)
            {
                cout<<c;
                c=c+1;
            }
            r=r+1;
            cout<<endl;
            } 
             int cn=1;
                while(cn<r)
                {
                cout<<cn;
                cn=cn+1;
                }
                ro=ro+1;cout<<" ";
            s=s-1;
            }
    }
}}