#include<iostream>
using namespace std;
int main()
{
    int n ,r,reminder;
    cout<<"enter the value";
    cin>>n;
    r=n;
    int reverse=0;
    while(n!=0)
    {
        reminder=n%10;
        reverse=reverse*10+reminder;
        n=n/10;
    }
    cout<<"reverse is ="<<reverse;
    if(reverse==r)
    cout<<"\n it is pallendrome";
    else
    cout<<"\nno is not pallendrome";
    return 0;

}