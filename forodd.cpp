#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"odd no are"<<endl<<i;
        s=s+i;
        i=i+1;
        
    }
    cout<<"sum of odd no are:"<<s;
}