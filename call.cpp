#include<iostream>
using namespace std;


int squar1(int n)
{
    n*=n;
    return n;
}
void squar2(int *n)
{
*n*=*n;
cout<<*n;

}
int main()
    {
int n1=8,sq,n2=9,sq2;
sq=squar1 (n1);
cout<<sq;
squar2(&n2);
return 0;
    }



