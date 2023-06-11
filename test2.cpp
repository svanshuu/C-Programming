#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=1,j=2,fact=1 ,choice;
    cout<<"enter any no..";
    cin>>n;
    cout<<"\n1.sum of natural \n2.sum of odd \n3 sum of even \n4 factorial";
    cin>>choice;
    if(choice==1)
    {
        while(i<=n)
        {
            sum=sum+i;
            i=i+1;
        }
        cout<<"sum is="<<sum;
    }
    else if(choice==2)
    {
        while(i<=n)
        {
            sum=sum+i;
            i=i+2;
        }
        cout<<"sum of odd "<<sum;
    }
    else if (choice==3)
    {
        while(j<=n){
            sum=sum+i;
            j=j+2;
        }
        cout<<"sum of even"<<sum;
    }
    else if( choice==4){
    while(i<=n){
        fact=fact*i;
        i=i+1;
    } 
    cout << "factorial is"<<fact;
    }
    return 0;
}