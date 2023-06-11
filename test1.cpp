#include<iostream>
using namespace std;
int main()
{
    int i=1,n,fact=1;
    cout<<"enter any no";
    cin>>n;
    while(i<=n)
    {
    fact=fact*i;
        i=i+1;
    }
    cout<< "the factorial is"<<fact;
    return 0;
}