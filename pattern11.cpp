#include<iostream>
using namespace std;
int main()
{
    char n;
    cout <<"Enter any word ";
    cin>>n;
    char r='A', i='A';
    while( r<=n)
    {
        char c='A';
        while(c<=r)
        {
        cout<<i;
        i=i+1;
        c=c+1;
        }
    cout<<endl;
    r=r+1;}
    return 0;
}