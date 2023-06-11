#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter any word..";
    cin>>n;
    char r='A';
    while (r<=n)
    {
        char c='A',col=r;
        while(c<=n)
        {
            cout<<col;
            c=c+1;
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    }
    return 0;
}