#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter character";
    cin>>n;
    char r='A' ,i='A';
    while(r<=n)
    {
      char c='A'; 
      while(c<=n)
      {
        cout<<i;
        i=i+1;
        c=c+1;
    }
    r=r+1;
    cout<<endl;
}
}