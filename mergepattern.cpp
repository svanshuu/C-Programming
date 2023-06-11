#include<iostream>
using namespace std;
int  main()
{
    int n ,choice ,again;
    char f;
    cout<<"\nchoose any one:::";
    cout<<"\n1) pattern in numbers \n2) pattern in words \n3)star patterns";
    cin>>choice;
    if(choice==1)
    {cout<<"enter any no";
    cin>>n;
        cout<<"which pattern do you want";
        cout<<"\n1)123\n2)111\n3)333\n4)trianglegreater to less \n5) triangleless to greater\n6) 123 triangle ";
        cin>>again;
        if( again==1)
        {
            int r=1;
            while(r<=n) 
            {
            int c=1;
            while(c<=n)
            {
                cout<<c;
                c=c+1;
            }
            cout<<endl;
            r=r+1;
        }
        }
        else if(again==2){
        int r=1;
        while(r<=n)
        {
            int c=1;
            while(c<=n)
            {
                cout<<r;
                c=c+1;
            }
            cout<<endl;
            r=r+1;
        }
    }
    else if(again==3){
        int r=n;
        while(1<=r){
        int c=n;
        while(1<=c)
        {
            cout<<r;
            c=c-1;
        }cout<<endl;
        r=r-1;
    }}
    else if(again==4){
        int r=1,i=1;
        while(r<=n)
        {
            int c=1;
            while(c<=r)
            {
                cout<<i;
                i=i+1;
                c=c+1;
            }
            cout<<endl;
            r=r+1;
        }
    }
    else if(again==5){
            int r=1;
    while(r<=n)
    {
    int c=1;
    while(c<=r)
    { 
           cout<<r;
    c=c+1;
    }
    r=r+1;
    cout<<endl;
    }} 
    else
    {
        int r=1;
    while(r<=n)
    {
    int c=1;
    while(c<=r)
    {
    cout<<r-c+1;
    c=c+1;
    }
    r=r+1;
    cout<<endl;
    }  } 
    return 0;
    } 
    else if(choice==2)
    { 
        cout<<"enter any word"; 
        cin>>f;
        cout<<"\n1)AAA \n2) ABC\n3) CCC \n4) traingle 1 \n5) traingle2 \6)traingle 3";
        cin>>again;
        if(again==1)
        {
            char r='A';
            while(r<=f)
            {
                char c='A';
                while( c<=f)  {
                cout<<r; 
                c=c+1;
                }
            cout<<endl;
            r=r+1;
        }
    }
    else if (again==2){
    char r='A' ,i='A';
    while(r<=f)
    {
      char c='A'; 
      while(c<=f)
      {
        cout<<i;
        i=i+1;
        c=c+1;
    }r=r+1;
    cout<<endl;
    }}
return 0;
}
else if(choice==3)
{
    cout<<"\nEnter any no";
    cin>>n;
    cout<<" which pattern do you want";
    cout<<"\n1)*** \n2tree pattern \n3greater tree";
    cin>>again;
    if(again==1)
    {
       int r=1;
    while (r<=n)
    {
        int col=1;
        while(col<=n){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    } 
    }
    else if(again==2){
        int r=1;
        while(r<=n)
        {int c=1;
        while(c<=r){
            cout<<".*.";
            c=c+1;
        }
     r=r+1;
     cout<<endl;
        }    }
        else if(again==3){
            int c=1;
            while(c<=n)
            {
                int r=1;
                while(r<=c)
                {
                    cout<<".*.";
                    c=c+1;
                }r=r+1;
                cout<<endl;
            }
        }
} 

}