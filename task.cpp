#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter the valueof n";
    cin>>n;
    int r=1;
    while(r<=n){
        int c=1;
        while(c<=n)
        {
            if(c==1|| c=n || r==1 || r=n)
            cout<<"5";
            else if(c==2 || c==n-1 || r=2 || r=n-1)
            cout<<"4";
            else if(c=3 || c=n-2 || r=3 || r=n-2)
            cout<<"3";
            else if(c=4 || c=n-3 || r=4 || c=n-3)
            cout<<"2";
            else
            cout<<".*.";
        }
        return 0;
    }
}