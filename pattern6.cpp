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
        cout<<r;
        c=c+1;
    }
    r=r+1;
    cout<<endl;
}
return 0;
}