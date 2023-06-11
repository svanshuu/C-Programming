#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"enter c";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b)
    cout<<"its a valid triangle";
    else
    cout<<"not  correct triangle";
return 0;
}

