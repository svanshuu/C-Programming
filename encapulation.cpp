#include<iostream>
using namespace std;
class encapulation{
    private:
    int x;
    public:
    void set (int a)
    {
        x=a;
    }
    int get()
    {
        return x;
    }
};
int main()
{
    encapulation obj;
    obj.set(5);
    cout<<obj.get();
    return 0;
}