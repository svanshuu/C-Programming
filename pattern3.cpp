#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=1;
    while(r<=n) 
    {
    int col=1;
    while(col<=n)
    {
        cout<<col;
        col=col+1;
}
cout<<endl;
r=r+1;
}
return 0; 
}