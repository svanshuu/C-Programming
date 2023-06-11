#include<iostream>
using namespace std;
int main()
{
    int n ,i,a=0,b=1,c;
    cout<<"Enter the value";
    cin>>n;
    cout<<a<<b;
    for(i=3; i<=n;i++)
{
    c=a+b;
    cout<<c;
    a=b;
    b=c;
    //c=a+b;
    //cout<<c;
}
cout<<endl;
return 0;
}