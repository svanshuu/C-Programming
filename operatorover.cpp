#include<iostream>
using namespace std;
class abc{
public:
  void func(int x)
  {
    cout<<"\nvalue of interger X is=="<<x;
  }
  void func(double y,double x)
  {
    double z;
    z=y+x;
    cout<<"\nsum of doubleis::"<<z;
  }
  void func(int x,int y)
  {
    int z;
    z=x+y;
    cout<<"\nsum of integer is..."<<z;
  }
  };
  int main()
  {
    abc obj;
    obj. func(7);
    obj. func(4.5,6.5);
    obj. func(7,9);
    return 0;
  }
  