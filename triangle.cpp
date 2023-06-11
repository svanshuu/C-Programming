#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any no";
    cin>>n;
    int r=1;
    while(r<=n)
    {
    int c=1;
    while(c<=r){ 
           cout<<r;
    c=c+1;
    }
    r=r+1;
    cout<<endl;
    }
    return 0;
}