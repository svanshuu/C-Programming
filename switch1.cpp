#include<iostream>
using namespace std;
int main()
{
 int choice,n1,ask,n2,n3,result;
 //char ask;
 for(;;)
 {
 cout<<"enter the no";
 cin>>n1;
 cout<<"enter the no ";
 cin>>n2;
 cout<<"\n start calculating:::\n1.ADDITION \n2 .substraction \n3.multiply \n4 division\n5 modulus";
 cout<<"enter your choice";
 cin>>choice;
 switch(choice)
 {
    case 1:
    result=n1+n2;
    break;
    case 2:
    result=n1-n2;
    break;
    case 3:
    result=n1*n2;
    break;
    case 4:
    result=n1/n2;
     break;
    case 5:
    result=n1%n2;
    break;
    default:
    cout<<"invalid choice";
     }
     cout<<result;
      cout<<"DO YOU WANT TO PRFORM AGAIN";
      cout<<"\n1.YESS \n2.NO";
      cin>>ask;
      if(ask==1)

      {
        cout<<"enter next num";
      cin>>n3;
      cout<<"\n start calculating:::\n1.ADDITION \n2 .substraction \n3.multiply \n4 division\n5 modulus";
      cout<<"enter your choice";
       cin>>choice;
      

        switch (choice)
        {
         case 1:
    result=result+n3;
    break;
    case 2:
    result=result -n3;
    break;
    case 3:
    result=result*n3;
    break;
    case 4:
    result=result/n3;
     break;
    case 5:
    result=result%n3;
    break;
    default:
    cout<<"invalid choice";
     }
     cout<<result;
      }
      else 
      {
        cout<<"thanks::";
        break;
      }
 }
 return 0;
}