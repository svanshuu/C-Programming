#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout <<"enter no";
    cin >>n;
    int i=;
    while (i<=n)
    { 
        int j=1 ,c=0;
    while (j<=i)
    {
        if (i%j==0) 
       { 
        c=c+1;
        j=j+1;
        }
        if(c==1||c==2)//wrong program;
        cout<<i;
     }
        i=i+1;
     cout<<endl;
     }
   return 0;
}