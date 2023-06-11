#include<iostream>
using namespace std;
void reverse( int arr[],int n)
{
    int temp,start=0;
    int end=n-1;
while(start<end)
{
  temp =arr[start];
  arr[start]=arr[end];
  arr[end]=temp;
  start++;
  end--;
}
}
void print( int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int arr[10],n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter array";
    for(int i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
    reverse(arr,n);
    print(arr,n);
   
    return 0;
}