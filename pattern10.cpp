#include<iostream>
using namespace std;
int main() 
{
    char n;
    cout<<"enter any word";
    cin>>n;
    char r='A';
    while(r<=n){
        char col='A';
        while(col<=r)
        {
            cout<<r;
            col=col+1;

        }
       cout <<endl;
       r=r+1;
    }
    return 0;
}