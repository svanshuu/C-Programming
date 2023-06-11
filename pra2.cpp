#include<iostream>
using namespace std;
int main()
{
    int r,c,j,n;
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=n-1;c>=r;c--){
         cout<<" ";}
         for (j=1;j<=n;j+=2)
         {
         cout<<"*";
            }
            
            cout<<endl;
    
            } return 0;
}