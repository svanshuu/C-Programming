#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any no...";
    cin>>n;
    int r=1 ;
    while(r<=n){
    int c=1,col=r;
    while(c<=r)
    {
          cout<<col;
          c=c+1;
          col=col+1;
    }
    r=r+1;
    cout<<endl;
    }
    return 0;
}