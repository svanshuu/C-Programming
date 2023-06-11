#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter character";
    cin>>n;
    char r='A';
    while(r<=n)
    {
      char c='A'; 
      while(c<=n)
      {
        cout<<c;
        c=c+1;
    }
   // cout<<r;
    r=r+1;
    cout<<endl;
}
}