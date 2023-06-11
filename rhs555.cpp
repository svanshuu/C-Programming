#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=1;
    while(r<=n)
    {
    int space=r-1;
    while(space)
    {
     cout<<" ";
     space=space-1;
    }
    int star =n-r+1;
    while(star)
    {
        cout<<r;
        star =star-1;
    }
    r=r+1;
    cout<<endl;
}
return 0;
}