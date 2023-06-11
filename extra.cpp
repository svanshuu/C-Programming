#include<iostream>
using namespace std;
int main()
{
    int a=6,b=9;

    //c=a&&b;
    //cout<<c;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<"velue of a"<<a<<"\nvalue of b"<<b;
    return 0;
}