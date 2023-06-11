#include<iostream>
using namespace std;
int main()
{
    int n , choice;
    char f;
     cout<<"enter any choice";
     cout<<"\n1)111 \n2)333 \n3)123 \n4)triangle1 in no.s\n5 triangle 2\n6)triangle 3 \n7)AAA \n8)CCC \n9)ABC\n10)triangle 1\n11)triangle2 \n12)triangle 3\n13) star pattern\n14)tree star pattern \n15)triangle";
     cout<<"\nyour choice";
     cin>>choice;
     if(choice==1)
     {
    cout<<"111";
    cout<<" \nenter any numbers";
    cin>>n;
    int r=1;
    while(r<=n)
    {
        int c=1;
        while(c<=n)
        {
            cout<<r;
            c=c+1;
        } cout<<endl;
        r=r+1;
    }
     } 
     else if(choice==2){
     cout<<"333";
      cout<<" \nenter any numbers";
    cin>>n; 
    int r=n;
    while (1<=r)
    {
        int c=n;
        while(1<=c)
        {
            cout<<r;
            c=c-1;
        } r=r-1;
        cout<<endl;
    } 
    }
     else if(choice==3)
    {
        cout<<"123";
        cout<<" \nenter any numbers";
        cin>>n; 
    int r=1 ,i=r;
    while(r<=n)
    {
        int c=1;
        while(c<=n)
        {
            cout<<i;
            i=i+1;
            c=c+1;
        }
         r=r+1;
        cout<< endl;
    }
    } 
     else if ( choice==4)
    {
     cout<<"enter any no";
    cin>>n;
    int r=1;
    while(r<=n)
    {
    int c=1;
    while(c<=r){ 
           cout<<r;
    c=c+1;
    }
    r=r+1;
    cout<<endl;
    }}
    else if(choice==5)
    {
        cout<<"its triangle 2..."; 
       cout<<"enter any no";
    cin>>n; 
      int r=1 ,count=1;
    while(r<=n)
    {
        int c=1;
        while(c<=r){
        cout<<count;
        count=count+1;
        c=c+1;
    }
    r=r+1;
    cout<<endl;
    }}
    else if(choice==6)
    {
        cout<<"\nits triangle 3";
        cout<<"\nenter any no ";
        cin>>n;
        int r=1;
        while(r<=n)
        {
    int c=1,col=r;
    while(c<=r)
    {
          cout<<col;
          c=c+1;
          col=col+1;
    }
    r=r+1;
    cout<<endl;
    }}
    else if(choice==7){
        cout<<"AAA";
        cout<<"enter the word";
        cin>>f;
        char r='A';
        while(r<=f)
        {
            char c='A';
            while(c<=f)
            {
                cout<<c;
                c=c+1;
            }r=r+1;
            cout<<endl;
        } }
        else if(choice==8)
        {
            cout<<"\nCCC";
            cout<<"enter any word";
            cin>>f;
            char r=f;
            while('A'<=r){
                char c=f;
                while('A'<=c)
                {
                    cout<<r;
                    c=c-1;
                }r=r-1;
                cout<<endl;
            } }
            else if(choice==9){
                cout<<"ABC";
                cout<<"enter any word";
                cin>>f;
            char r='A',i='A';
            while(r<=f){
            char c ='A';
            while(c<=r)
            {
                cout<<i;
                i=i+'A';
                c=c+1;
            }
            r=r+1;
            cout<<endl;}}
            else if(choice==10)
            {
                cout<<"\ntrianglr 1";
                 cout<<"enter any word";
            cin>>f;
            char r='A';
    while (r<=f)
    {
        char c='A',col=r;
        while(c<=n)
        {
            cout<<col;
            c=c+1;
            col=col+1;
        }
        cout<<endl;
        r=r+1;
    }}
     else if(choice==11)
     {
        cout<<" its triangle2 in words";
        cout<<"enter any word";
            cin>>f;
            char r='A';
    while (r<=f){
        char c='A';
        while(c<=r)
        {
        cout<<r;
        c=c+1;
        }
        r=r+1;
        cout<<endl;
    }
     } 
     else if(choice==12)    {
        cout<<" its triangle 3in words";
        cout<<"\n enter any word";
        cin>>f;
        char r='A';
         while( r<=f)
    {
        char c='A',i='A'+f-r ;
        while(c<=r)
        {
        cout<<i;
        i=i+1;
        c=c+1;
        }
        r=r+1;
    cout<<endl;
     } } 
     else if(choice==13)
     {
        cout<<"its a star pttern";
         cout<<"\nenter any no ";
        cin>>n;
        int r=1;
        while(r<=n){
            int c=1;
            while(c<=n)
            {
                cout<<":*:";
                c=c+1;
            }
            r=r+1;
            cout<<endl;
        }
     }
     else if(choice==14){
     cout<<"\nits a star triangle";
     cout<<"\nanter any no..";
     cin>>n;
     int r=1;
     while(r<=n)
     {
        int c=1;
        while(c<=r){
        cout<<".*.";
        c=c+1;
        }
        r=r+1;
        cout<<endl;
     }}
     else if(choice==15){
     cout<<"\n its astar tree pattern";
     cout<<"enter any no";
     cin>>n;
     int r=1;
     while(r<=n)
     {
        int c=1;
        while(c<=r)
       cout<<"-+-";
       c=c+1;
     }
     r=r+1;
     cout<<endl;
     }

    return 0;
     }