#include<iostream>
using  namespace std;
class vehicale
{
    public:
     vehicale()
    {
        cout<<"this is a vehical";
    }
};
class fourwheeler
{
    public:
    fourwheeler()
    {
        cout<<"this is a car";
    }
};
class car :public vehicale , public fourwheeler
{
    public:
    car()
    {
    cout<<" petrol is necessary to start car";
    }
};
int main()
{
    //vehicale r;
   // fourwheeler f;
    car c ;
    //c.vehicle();
    //c.fourwheeler();
return 0;
}