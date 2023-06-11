#include<iostream>
using namespace std;
void fact(int *n)
{
    int fact=1,i=1;
    for(i=1;i<=*n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
}
int main()
{
    int r;
    cin>>r;
    fact(r);
}