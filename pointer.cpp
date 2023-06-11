#include<iostream>
using namespace std;
int main()
{
    int var =10;
    int ***a=&var;
    cout<<***a;
    return 0;
}