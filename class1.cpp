#include<iostream>
using namespace std;
class square{
public:
int n;
char m;
void num1();
void num2();
void num3();
void num4();
void alpha1();
void alpha2();
void alpha3();
void alpha4();
};
class tri{
    public:
    int n;
    void rhs1();
    void rhs2();
   void rhs3();
    void rhs4();
};
  void square:: num1()
{  int i,j;
    cout<<"enter the vakue";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void square:: num2(){
    int i,j;
    cout<<"enter the vakue";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
void square:: num3()
{ 
    cout<<"enter the vakue";
    cin>>n;
    int r=1,count=1;
while(r<=n){
    int c=1;
    while(c<=n){
    cout<<count;
    count=count+1;
    c=c+1;
    }
    cout<<endl;
    r=r+1;
}
    }
    void square::num4()
    {
      cout<<"enter the vakue";
    cin>>n;   
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
    }
    }
    void square::alpha1()
    {
cout<<"enter character";
    cin>>m;
    char r='A';
    while(r<=m)
    {
      char c='A'; 
      while(c<=m)
      {
        cout<<r;
        c=c+1;
    }
    r=r+1;
    cout<<endl;}
    }
    void square::alpha2()
    {
        cout<<"enter character";
    cin>>m;
    char r='A' ,i='A';
    while(r<=m)
    {
      char c='A'; 
      while(c<=m)
      {
        cout<<i;
        i=i+1;
        c=c+1;
    }
    r=r+1;
    cout<<endl;
}
    }
    void square::alpha3()
    {
            char m;
    cout<<"enter character";
    cin>>m;
    char r='A';
    while(r<=m)
    {
      char c='A'; 
      while(c<=m)
      {
        cout<<c;
        c=c+1;
    }
   // cout<<r;
    r=r+1;
    cout<<endl;}
    }
    void square::alpha4()
    {
       char n;
    cout <<"Enter any word ";
    cin>>m;
    char r='A' ;
    while( r<=m)
    {
        char c='A' ,col=r;
        while(c<=r)
        {
        cout<<col;
        col=col+1;
        c=c+1;
        }
    cout<<endl;
    r=r+1;
    } 
    }
    void tri::rhs1()
    {
       cout<<"enter any no..";
    cin>>n;
    int r=1;
    while(r<=n)
    {
    int space=r-1;
    while(space)
    {
cout<<" ";
space=space-1;
    }int col=r;
    while(col<=n)
    {
        cout<<col;
        col=col+1;
       // star =star-1;
    }r=r+1;
    cout<<endl;
} 
    }
    void tri::rhs2()
    {
        cout<<"enter any no";
    cin>>n;
    int r=1 ,i=1;
    while(r<=n){
     int s=n-r+1;
     while(s)
     {
        cout<<i;
        i=i+1;
        s=s-1;
     }
     cout<<endl;
     r=r+1;}
    }
    void tri::rhs3()
    {
       cout<<"enter any no n";
   cin>>n;
   int r=n ,i=1;
   while(i<=n)
   {
      int s=n-i+1;
      while(s)
      {
         cout<<r;
        s= s-1;
      } cout<<endl;
     r=r-1;}  
    }
    void tri::rhs4()
    {
        cout<<"enter the value";
      cin>>n;
    int r=1;
    while(r<=n)
    {
    int space=r-1;
    while(space)
    {
     cout<<" ";
     space=space-1;
    }
    int star =n-r+1;
    while(star)
    {
        cout<<r;
        star =star-1;
    }
    r=r+1;
    cout<<endl;
}
 
    }
    

int main()
{
    int choice;
    square obj;
    tri rh;
    cout<<"enter your choice";
    cout<<"\n which type of pattern\n1. square num1 \n2.sq.num2 \n3.sqnum3 \n4 sq.num4  ";
    cout<<"\n 6.alpabet1 \n7 alpha2 \n8.alpha3 \n9 alpha 4";
    cout<<"\n 10 rhs1 \n11 rhs2 \n12 rhs3 \n13 rhs4";
    cin>>choice;
    switch(choice){
    case 1:
      obj.num1();
      break;
    case 2:
     obj.num2();
     break;
    case 3:
      obj.num3();
      break;
    case 4:
     obj.num4();
     break;
    case 5:
     obj.alpha1();
     break;
    case 6:
     obj.alpha2();
     break;
    case 7:
      obj.alpha3();
      break;
    case 8:
      obj.alpha4();
      break;
    case 9:
       rh.rhs1();
       break;
    case 10:
       rh.rhs2();
       break;
    case 11:
      rh.rhs3();
      break;
    case 12:
      rh.rhs4();
      break;
    default:
    cout<<"wrong input";
    break;
    }
    return 0;
}
