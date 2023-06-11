#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y ,ans ,n;
    char r;
    for(;;)
    {
        cout<<"Enter no";
        cin>>x;
        cout<<"\nEnter 2nd no";
        cin>>y;
        cout<<"LETS CALCULATE";
        cout<<"\nADDTION(+) \nSUBTRACTION(-) \nDIVISION(/)\n MULTIPLY(*) \n MODULUS(%) ";
        cout<<"\n pie(@)@,\nPOWER(^)\nFACTORIAL(!)\nINVERSE(1/X)\n  UNDER ROOT \nSIN \n cos\ntan";
        cin>>r;
        if(r=='+')
        ans=x+y;
        else if(r=='-')
        ans=x-y;
        else if(r=='/')
        ans=x/y;
        else if(r=='%')
        ans=x%y;
        else if(r==M_PI)
        ans=x*y*M_PI;
        else if

        cout<<ans;
        cout<<"\n::do you want to perform again::";
        cout<<"\n1.yess \n2.noo";
        cin>>n;
        //if(n==1)
        
        break;
    }
}