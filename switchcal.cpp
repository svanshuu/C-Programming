#include<iostream>
using namespace std;
void even(int i)
{
    int r=2;
    while(r<=i)
    {
        cout<<r;
        r=r+2;
    }
}
void odd(int n){
    int i;
    
    for(i=1;i<=n;i++)
    {
        cout<<i;
        i=i+1;
    } 
    }
int main()
{
    int n,f;
    cout<<"enter even no";
    cin>>n;
    even(n);
    cout<<"enter odd no";
    cin>>f;
    odd(f);
    return 0;
}