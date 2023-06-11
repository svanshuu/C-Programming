#include<iostream>
using namespace std;
int main()
{
int n ,choice ;
 cout<<"enter any noo";
 cin>>n;
 cout<<"enter your choice";
 cout<<"\n1 triangle \n2. pattern1 \n 3 
pattern2 \n 4  star";
 cin>>choice;
 if(choice==1){
int r=1;
while(r<=n)
{
    int c=1;
    while(c<=r)
    {
        cout<<"*";
        c=c+1;
    }
    cout<<endl;
    r=r+1;
}
 }  
 if(choice==2)
 {
    int r=1;
    while(r<=n){
        int c=1;
        while(c<=n)
        {
            cout<<c;
            c=c+1;
        }
        cout<<endl;
        r=r+1;
    }
 }  
 if(choice==3){
int r=1;
while(r<=n)
{
    int c=1;
    while(c<=n){
    cout<<r;
    c=c+1;
}
cout<<endl;
r=r+1;
 }
} 
if(choice==4){
    int r=1;
    while(r<=n)
    {
        int c=1;
        while(c<=n)
        {
            cout<<".*.";
            c=c+1;
        }
        cout<<endl;
        r=r+1;
    }
}return 0;
}
