#include<iostream>
using namespace std;
int main()
{
    int a=1,b=2;
    if(a-->0 && ++b>2)
cout<<"stage1";
else{
    cout<<"stage2";
}
cout<<a<<b<<endl;
}