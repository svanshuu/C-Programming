#include<iostream>
using namespace std;
int main()
{
    char n;
    cout <<"Enter any word ";
    cin>>n;
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
    r=r+1;
    }
    return 0;
}