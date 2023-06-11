#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number ..";
    cin>>n;
    int r=n;
    while(1<=r)
    {
         int c=n;
         while(1<=c)
         {
         cout<<r;
         c=c-1;
         }
    r=r-1;
    cout<<endl;
    }
    return 0;
}