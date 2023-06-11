#include<iostream>
using namespace std;
int main()
{
    int p ,r,t,SUM, AV, SI;
    cout<<"enter the principal";
    cin>> p;
    cout<< "enter the rate";
    cin>>r;
    cout<<"enter time taken";
    cin>>t;
    SUM=p+r+t;
    cout<<" \n SUM="<<SUM;
    AV=SUM/3;
    cout<<"\n average is AV="<<AV;
    if(p>t&&p>r)
    cout<<"p is grater";
    if(t>p&&t>r)
    cout<< "t is greater";
    else
    cout<<"r is grater";
    SI=p*r*t/100;
    cout<< " \n simple intrest is"<<SI;
    return 0;
}