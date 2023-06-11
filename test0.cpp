#include<iostream>
using namespace std;
int main()
{
    int n,choice ,r;
    cin>>n;
    cout<<"enter your choice";
    cout<<"1) 2) 3) 4) ";
    cin>>choice;
    if (choice==1)
    {cout<<" factorial";
    int fact=1;int i=1;
    while(i<=n){
    fact=fact*i;
    i=i+1;
    
    }
 cout<<"factorial is"<<fact;}
 else if (choice==2)
 {
   cout<<"its pattern";
   for(r=1;r<=n;r++)
   {
    int s=n-r+1;
    while(s)
    {
        cout<<"  ";
        s=s-1;
    }
    int c=1;
    while(c<=r)
    {
        cout<<r;
        c=c+1;
    }
   }  
   cout<<endl;
   cout<<endl;
 }
else if(choice==3)
{
    for(r=1;r<=n;r++)
    {
        int s=r-1;
        while(s)
        {
            cout<<" ";
            s=s-1;
        }
        int c=1;
        while(c<=r)
        {
            cout<<r;
            c=c+1;
            
        }cout<<endl;
    } cout<<endl;
}
 else if(choice==4)
 {
    int r=n ,i=1;
    while(1<=r)
    {
int s=i-1;
while(s)
{
    cout<<" ";
    s=s-1;
}

int c=1;
while(c<=r)
{
    cout<<c;
    c=c+1;
} 
r=r-1;
cout<<endl;
    } cout<<endl;
 }
}