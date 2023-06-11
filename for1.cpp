#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter any no";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=1;j--)
        cout<<j;
        cout<<endl;
    }
    return 0;
}