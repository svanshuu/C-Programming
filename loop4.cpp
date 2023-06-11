#include <iostream>
using namespace std;
int main()
{
char ask ;
int n; 
while(1){
cout<<" enter value";
cin>>n;
cout<<"enter yor choice ...";
cout<<"N.) natural no O.)odd no E.) even no  S.) sum F.)factorial \n ";
cin >> ask;
if ( ask=='N')
{
    int i=1;
    while(i<=n)
    {
        cout<<"natural no is"<<i;
        i=i+1;
    }
}
if (ask=='O')
{
int j=1;
while(j<=n)
{
    cout <<"odd no"<<j;
    j=j+2;
}
}
if (ask=='E')
{
int k=2;
while (k<=n)
{
cout <<"even no"<<k;
k=k+2;
}
}
if(ask=='S'){
    int l=1,sum=0;
    while(l<=n)
    {
        l=l+1;
        sum =sum+l;
        cout << "sum is "<<sum;
    }
}
 if(ask=='F')
 {
    int m=1,fact=1; 
    while (m<=n)
    {
    m=m+1;
    fact=fact*m;
    cout<<"\nfactorial is"<<fact;
    }
}
} 
return 0;
}
