#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array;";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<a[n-1];
    for( int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}