#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter no";
    cin >>n;
    int r=1;      
         while(r<=n)
    {
        int col=n;
        while(col<=n)
        {
           cout<<col; 
           col=col-1;
        }
        r=r+1;
        cout<<endl;
    }
return 0;
}