#include<iostream>
using namespace std;
 int getmax(int arr[])
{   int max;
    max= arr[0];
        for(int i=0;i<10;i++)
         { 
            if(arr[i]>max)
            {
                max=arr[i];
            }}
            cout<<max;
            return max;
}
int getmin(int arr[])
{
    int min;
    min=arr[0];
    for (int i=0;i<10;i++)
    {
        if(arr[i]<min)
         {
            min=arr[i];
         }
    }
    cout<<min;
    return min;
}
int main()
{
    int arr[10],m,n;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];    
        }
    m = getmax(arr);
    n =getmin(arr);
    cout<< "max"<<m;
    cout<<"\nmin"<<n;
}