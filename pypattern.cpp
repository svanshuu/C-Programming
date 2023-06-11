#include<iostream>
using namespace std;
int main()
{
    int c;
    int r;
       for(r=1;r<=5;r++)
       {
        
        for(c=1;c<=r;c++)
        {
            if(r==1)
         cout<<"@";
        if(r==2)
         cout<<"$";
        if(r==3)
        cout<<"!";
        if(r==4)
        cout<<"%";
        if(r==5)
         cout<<"&";
            cout<<r;
        }
        cout<<endl;
       }
       return 0;
}