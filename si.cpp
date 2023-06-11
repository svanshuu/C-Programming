#include<iostream>
using namespace std;
int main()
{
    int Si,r ,t, p;
    cout<<"enter the rate";
    cin>>r;
    cout<<"enter principal value";
    cin>>p;
    cout<<"enter the time taken";
    cin>>t;
    Si=r*t*p/100;
    cout<<"simple intrest is"<<Si;
    return 0;
}