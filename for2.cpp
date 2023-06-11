#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n enter any no";
    cin >>n;
    int r=1;
    while(r<=n)
    {
     int c=1;
     while(c<=r)
     {
        c=c+1;
        cout<<"x";
     }
     r=r+1;
     cout<<endl;
    }
    return 0;
}