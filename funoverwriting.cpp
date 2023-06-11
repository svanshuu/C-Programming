#include<iostream>
using namespace std;
class parent{
public:
  void print()
  {
    cout<<"this is parent print";
  }
};
class child:public parent{
    public:
     void print ()
     {
        cout<<"\nthis is chid print0";
     }
};
int main()
{
 child c;
  c.print();
  return 0; 
}