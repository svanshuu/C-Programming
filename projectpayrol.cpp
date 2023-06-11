#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class job{
  public:
  void non_tech();
  void tech();
};
void job::non_tech()
{
  char edu[20],skill[50],d[10] ,degree[10],deploma[50];
  char ask;
  int year;
  cout<<"  NON -TECHNICAL JOBS";
  cout<<" PLEASE SHARE YOUR INFORMATION FOR  FURTHER PROCESS";
  cout<<"  YOUR EDUCATION";
  cout<<"DO YOU HAVE \n\aDEGREE \n\aDEPLOMA";
  cin >>d;
    if(strcmp(d,"DEGREE")==0)
    {
      cout<<" \nA)BBA \nB)BJMC\nC)BA \nD)B.COM \nE) B.DES";
      cin>>degree;
      if(strcmp(degree,"BBA")==0)
      {
        cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;
    if(ask=='y')
    {
      cout<<"hom many years of experince (1-12) ";
      cin>>year;
    }
    else
    {
     cout<<"as a fresher \n you salary must be 1.65 lakh annum";
      cout<<"\n your inhand salry=12500 ";
      cout<<"\n  your pf from salary 700\nmedical insurence 550 ";
    }

      }
      if(year>4)
      {
        
        cout<<" \n your salary must be 3 lakh annum";
      cout<<"\n your inhand salry=21000 ";
      cout<<"\n  your pf from salary2000  \nmedical insurence 1500";
       
      }
      if(year>8)
      {
       cout<<"salary  as experienced upto 5.3 lakh per annum ";
      cout<<"\n your inhand salry=42000 ";
      cout<<"\n  your pf from salary1.5k \nmedical insurence 600";
  
      }
      if(year>=12)
      {
        cout<<"highest salry is 23.6 lakhs per annum as an business administrator";
        
      cout<<"\n your inhand salry=1.86lakh ";
      cout<<"\n  your pf from salary   6000\nmedical insurence 5500";
  
      }
      if(strcmp(degree,"BJMC")==0)
      {
        cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;
    if(ask=='y')
    {
      cout<<"hom many years of experince (1-12) ";
      cin>>year;
      if (year>4)
      {cout<<"\nAS A JOURNLIST";
        cout<<"as you have experience your have chance to get mmore then 5lakh perannum pakage";
      }
      else if( year>8)
      cout<<"as you have experience your have chance to get mmore then 15lakh perannum pakage";
      else if(year >=12)
      cout<<"as you have experience your have chance to get mmore then 20lakh perannum pakage";
    }
    else
    { 
     cout<<"\nAS A JOURNLIST";
     cout<<"\n average pakage as freshar is 3.5k aprox in INDIA";
     cout<<"YOU PF IS DEPND UPON YOR CHOICE SAME CHOICE WITH YOUR MEDIACL INCCURENCE"; 
    }
      }
      if(strcmp(degree,"BA")==0)
      { cout<<"\n                         Business analyst";
        cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
       if(year>6)
       {
       cout<<"as a freshar in B A  your salary must be in between 3-5 lakhs per annum";
     cout<<" in hand you get aprox 25000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 750 per mounth ";
       }
       if(year>=12)
       {
 cout<<"as a experienced in B A  your salary must be in between 5-10 lakhs per annum";
     cout<<" in hand you get aprox 36000\n PF cut from salary will be lewss then 1.5k per mounth\nmedical insu.aproxx 900per mounth ";
       }
    }
    else
    {
     cout<<"as a experienced in B A  your salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    }
      }
    }
    if(strcmp(d,"DIPLOMA")==0)
    {
      cout<<"\n a)fasion desining \nb poli \nc.CYBER LAW\nD AYURVADIC PHARMCIE ";
      cin>>deploma;
    }
    cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
    }
    else
    {

    }
   
}
int main()
{
  job obj;
  obj.non_tech();
 return 0;
}