#include<iostream>
using namespace std;
#define CANDIDATE1 "Vanshu"
#define CANDIDATE2 "aman"
#define CANDIDATE3 "Vanshika"
#define CANDIDATE4 "ANSHU"
int votesCount1=0, votesCount2=0 ,votesCount3=0,votesCount4=0,spoiledvotes=0;
void castVote()
{
    int choice,input=2003;
    cout<<"\n Please choose your Candidate";
    cout<<"\n 1."<<CANDIDATE1;
    cout<<"\n 2."<<CANDIDATE2;
    cout<<"\n 3."<<CANDIDATE3;
    cout<<"\n 4."<<CANDIDATE4;
   cout<<"\n Enter your candidate";
   cin>>choice;
   switch (choice)
   {
    case 1:
    votesCount1++;
    break;
    case 2:
    votesCount2++;
    break;
    case 3:
    votesCount3++;
    break;
    case 4:
    votesCount4++;
    break;
    default:
    cout<<"ERROR:::Wrong Choice";

   }
   cout<<"\n thanks for vote!!";
   return 0;
}
void votescount(){
    int input=2003;
    cout<<"\nEnter passward::";
    cin>>input;
    if(input==2003)
    {
        cout<<"Thanks:::";
        cout<<"\n\n voting statics::";
        cout<<\n
    }

}