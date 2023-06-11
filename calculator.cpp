#include<iostream> 
using namespace std;
int main()
{
    int n1,n2, n3, result;
    char choice ,again;  
 {  
   cout<<"\nEnter 2 numbers";
    cin>>n1>>n2;
    cout<< "\n ##enter your choice for calculation##\n";
    cout<<"\n A)ADD + \n S)SUBTRACT -\nM)MULTIPLY *\n D) DIVIDE / \n v)MODULS%";
    cin >>choice; 
    if(choice=='A')
    result=n1+n2;
    else if (choice=='S')
      result=n1-n2;
    else if (choice=='M')
    result=n1*n2;
     else if(choice=='D')
     result=n1/n2;
     else if(choice=='V')
      result=n1%n2;
     cout<<"the result"<<result;  
     cout<<"\ndo you want to calculate again";
     cout<<"\n Y)yes \n N) no";
     cin >>again;
      if (again=='Y'){
      while(1){
      cout<< "\n ##enter your choice for calculation##\n";
    cout<<"\n A)ADD + \n S)SUBTRACT -\nM)MULTIPLY *\n D) DIVIDE / \n v)MODULS%";
    cin >>choice;
    cout<<"enter next variable";
    cin>>n3; 
      if(choice=='A')
    result=result+n3;
    else if(choice=='V')
      result=result%n3;
     else if(choice=='D')
     result=result/n3; 
    else if (choice=='M')
    result=result*n3;
    else if (choice=='S')
    result=result-n3;
   cout<<"the result .."<<result;
   cout<<"\ndo you want to calculate again";
     cout<<"\n Y)yes \n N) no";
     cin >>again;
     if(again=='Y')
     continue;
     else
     break;
 }      }}
   return 0;  
    }

    