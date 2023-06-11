#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ,i,j;
    
cout<<"Enter no";
    cin>>n;
    if(1<=n&&n<=9)
    {
        
        {
            for(n=0;1<n;n--){
switch( 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }}
        }
    }
    else if(n>9)
    {
        if(n%2==0)
        {
            for(i=2;i<=n;++i)
            {
             cout<<i;
             i=i+1;
            }
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                cout<<j;
                j=j+1;
            }

        }
    }
return 0;
}