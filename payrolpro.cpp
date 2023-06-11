#include <iostream>
#include<string.h>
#include<conio.h>
using namespace std;


int skillset()
{ char skill[50];
//int skill_sal;

int skill_sal,choose ,sal;
    cout<<"         \n\n                 Skillset";
    cout<<"\n c++ \n PYTHON \n JAVA \n SPANISH \n franch \n KOREAN ";
    cin>>skill;
    if(strcmpi(skill,"c++")==0)
    {
     skill_sal=1000;
    }
    if(strcmpi(skill,"python")==0)
    {
        skill_sal=1500;

    }
    if(strcmpi(skill,"java")==0)
    {
        skill_sal=2000;
    }
    if(strcmp(skill,"spanish")==0)
    {
        skill_sal=1000;
    }
    if(strcmp(skill,"franch")==0)
    {
        skill_sal=1500;
    }
    if(strcmpi(skill,"korean")==0)
    {
        skill_sal=1800;
    }
    sal=skill_sal;

  cout<<"do you have more skills";
  cout<< "\n if yess press Y\n if no press N";
  cin>>choose;
  if(choose=='Y')
  {
   cout<<"\n c++ \n PYTHON \n JAVA \n SPANISH \n franch \n KOREAN ";
    cin>>skill;
    if(strcmpi(skill,"c++")==0)
    {
     skill_sal=1000;
    }
    if(strcmpi(skill,"python")==0)
    {
        skill_sal=1500;

    }
    if(strcmpi(skill,"java")==0)
    {
        skill_sal=2000;
    }
    if(strcmp(skill,"spanish")==0)
    {
        skill_sal=1000;
    }
    if(strcmp(skill,"franch")==0)
    {
        skill_sal=1500;
    }
    if(strcmpi(skill,"korean")==0)
    {
        skill_sal=1800;
    } 
     sal=skill_sal+sal;
  }
 // if(choose=='N')
  
    cout<<endl<<skill;
    return sal;
}
int experience()
{ int exp;
 int exp_sal;

    cout<<"\ndo you have any experience in years ";
    cout<<"\n 0\n1\n2\n3\n4 \n5\n6\n7\n8\n9 \n10\n11\n12";
    cin>>exp;
    if(exp>=4)
    {
        exp_sal=1000;
    }
      if(exp>=8)
    {
        exp_sal=1500;
    }
     if(exp>=12)
    {
        exp_sal=2000;
    }
    cout<<endl<<exp;
    if (exp<13||exp>1)
     {
    cout<<" enter only given choices";
         cout<<"\n 0\n1\n2\n3\n4 \n5\n6\n7\n8\n9 \n10\n11\n12";
       cin>>exp;
    if(exp>=4)
    {
        exp_sal=1000;
    }
    if(exp>=8)
    {
        exp_sal=1500;
    }
    if(exp>=12)
    {
        exp_sal=2000;
    }
    }
    cout<<endl<<exp;
    return exp_sal;
}
int  edu()
{

 char degree;
 float edu_sal;

char deg[ 10];
   cout<<"Give us your education information";
   cout<<"\n A BACHLOR DEGREE \n B MASTERS DEGREE \n C DIPLOMA";
cin>> degree;
if(degree=='A')
{
    cout<<"\n What type of bachlor degree that you have";
    cout<<" \n B.TECH \n BBA\n BCA \n BJMC\n B.SC\nb.arc";
    cin>>deg;
    if(strcmpi(deg,"B.TECH")==0)
    {
        cout<<" \n  BACHLOR OF TECHNOLOGEY";
        edu_sal=1;
    }
    if(strcmpi(deg,"BBA")==0)
    {
       cout<<"BACHLOR OF bBUSSINESS ADMISTRATION ";
       edu_sal=1.2; 
    }
    if(strcmpi(deg,"BCA")==0)
    {
        cout<<"\n bachlor of computer application";
        edu_sal=1.8;
    }
    if(strcmpi(deg,"BJMC")==0)
    {
        cout<<" BACHLOR OF JURNLASIM AND AMASS COMMUNICATION ";
        edu_sal=1.2;
    }
    if(strcmpi(deg,"B.SC")==0)
    {
            cout<<"\nbachlor of science ";
            edu_sal=1;
    }
    if(strcmpi(deg,"B.ARC")==0)
    {
     cout<<"\nbachlor of arcitechture";
     edu_sal=1.4;
    }
}
if(degree=='B')
{
    cout<<"\n masters degrees are\n MCA\n M.COM \n MBA\nM.TECH";
    cin>>deg;
    if(strcmpi(deg,"MCA")==0)
    {
        cout<<"\n MASTERS OF COMPUTER APPLICATION";
        edu_sal=2.1;
    }
if(strcmpi(deg,"M.COM")==0){
    cout<<" \nmasters of commerce";
    edu_sal=1.8;
  
}
if(strcmpi(deg,"MBA")==0)
{
    cout<<"\n MASTERS OF BISSINESS ADMINISTRATION";
    edu_sal=1.5;

}
if( strcmpi(deg,"M.TECH")==0)
{
    cout<<" \n masters of technology";
    edu_sal=2.2;
}
}
if(degree=='C')
{
    cout<<"\n  DIPLOMA";
    cout<<"\n poly \n fasion design\n jweelry design\nsoft skill\n N/A";
    cin>>deg;
    edu_sal=1.2;
    if(strcmpi(deg,"NA")==0)
    {
        edu_sal=1;
    }
}
cout<<endl<<deg;
 return edu_sal;
}
/*void total_salary()
{// int skill,educ;
    
    int skill=skillset();
     
    int  educ=edu();
   cout<<educ;
}*/
int main()

{

  string name1,name2 ;
  int ch,a,b,c;
  double  salary, t_salary, pf ,medical,in_hand;
  system ("cls");
  cout<<"\t\a            ###############PAYROL MANAGMENT SYSTEM##############";
  
   cout<<"\n Enter your first name";
  cin>>name1;
  cout<<"\nenter second name";
  cin>>name2;
  cout<<" \nyour name"<<name1+" "+name2;
do{
    cout<<"\n TELL US aBOUTYOUR SKILLS";
     a=skillset();
     b= experience();
     c= edu();
     system ("cls");
     //cout<<a<<b<<c;
     salary =a*b*c;
     cout<< "\npakage per annum= "<<salary;
      t_salary=salary/12;
      cout<<"\nMounthly salary= "<<t_salary;
      pf=1.75/100*t_salary;
      cout<<"\nPf will be ="<<pf;
      medical=2*100/t_salary;
      cout<<"\n  medical charges per mounth $ "<<medical;
      in_hand= t_salary-pf- medical;
      cout<<"\n IN HAND PER MOUNTH SALRY "<<in_hand;

    cout<<"\ndo you want to perform again";
 cout<<"\n 1 yss \n 0 no";
 cin>>ch;
 if(ch==0)
{
  cout<<"exit";
  break;
}
}
while(ch==1);
 return 0;
}