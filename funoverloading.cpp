#include<iostream>
using namespace std;
class abc{
public:
  void func(int x)
  {
    cout<<"\nvalue of interger X is=="<<x;
  }
  void func(double y)
  {
    cout<<"\nvalue of double Y is::"<<y;
  }
  void func(int x,int y)
  {
    cout<<"\nvalue of x & y are...."<<x<<y;
  }
  };
  int main()
  {
    abc obj;
    obj.func(7);
    obj.func(6.74);
    obj.func(6,9);
    return 0;
  }