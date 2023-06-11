#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class job{
  public:
  void non_tech();
  void tech();
  void inter();
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
    else if(ask=='n')
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
      else if(year>=12)
      cout<<"as you have experience your have chance to get mmore then 20lakh perannum pakage";
    }
    if (ask=='n')
    { 
     cout<<"\nAS A JOURNLIST";
     cout<<"\n average pakage as freshar is 3.5k aprox in INDIA";
     cout<<"YOU PF IS DEPND UPON YOR CHOICE SAME CHOICE WITH YOUR MEDIACL INCCURENCE"; 
    }
      }
      if(strcmpi(degree,"BA")==0)
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
    if (ask=='n')
    {
     cout<<"as a experienced in B A  your salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    }
      }
    if(strcmpi(degree,"B.COM")==0)
    {
      cout<<"\n                        Bachelor of Commerce      ";
      cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {cout<<"hom many years of experince ";
      cin>>year;
        if(year>4)
        {
         cout<<"\nas an experienced you salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
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
      }}
      if(ask=='n')
      cout<<"you dont have any experience your salary must be below 1.5 lakh per annum";

        
    }
    if(strcmpi(degree,"B.DES")==0)
    {
cout<<"                        \n          Bachelor of Design [B.Des]"  ;
   cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     {
        if(year>4)
        {
         cout<<"\nas an experienced you salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    } 
    if(year>8)
      {
       cout<<"salary  as experienced upto 5.3 lakh per annum ";
      cout<<"\n your inhand salry=42000 ";
      cout<<"\n  your pf from salary1.5k \nmedical insurence 600";
  
      }
      if(year>=12)
      {
        cout<<"highest salry is 23.6 lakhs per annum as a designer";
        
      cout<<"\n your inhand salry=1.86lakh ";
      cout<<"\n  your pf from salary   6000\nmedical insurence 5500";
      }

     } 
    }
    if (ask=='n')
    {
      
      cout<<"you dont have any experience your salary must be below 1.5 lakh per annum";

    }
    }
    }
    if(strcmpi(d,"DIPLOMA")==0)
{
    cout<<"a)fashion designing\nb) HOTEL .M";
      cout<<"\n tell us aboutyour diploma";
      cin>>deploma;
      if(strcmpi(deploma,"FASION")==0){
    cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
      if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
       if(year>6)
       {
       cout<<"as a freshar in fasion designer your salary must be in between 3-5 lakhs per annum";
     cout<<" in hand you get aprox 25000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 750 per mounth ";
       }
       if(year>=12)
       {
 cout<<"as a experienced in fasion designor  your salary must be in between 5-10 lakhs per annum";
     cout<<" in hand you get aprox 36000\n PF cut from salary will be lewss then 1.5k per mounth\nmedical insu.aproxx 900per mounth ";
       }
    }
    if (ask=='n')
    {
     cout<<"as a experienced in fasion designor your salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    }
    }
}
      if(strcmpi(deploma,"HOTEL.M")==0){
        cout<<"\n\n  diploma with hotel managment";
    cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
      //cout<<"hom many years of experince ";
     // cin>>year;
       if(year>6)
       {
       cout<<"as a freshar in fasion designer your salary must be in between 3-5 lakhs per annum";
     cout<<" in hand you get aprox 25000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 750 per mounth ";
       }
       if(year>=12)
       {
 cout<<"as a experienced in fasion designor  your salary must be in between 5-10 lakhs per annum";
     cout<<" in hand you get aprox 36000\n PF cut from salary will be lewss then 1.5k per mounth\nmedical insu.aproxx 900per mounth ";
       }
    }
    if (ask=='n')
    {
     cout<<"as a experienced in fasion designor your salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    }
    }
} 
}
void job::tech()
{
    int year ,skill;
    char ask;
    char degree[20],diploma[20],masters[20] ,d[20], skills[40];
    cout<<"\n FOR TECHNICAL JOBS";
    cout<<"\npleases share your education info with us";
    cout<<"\n Graduated  \nPost graduation \nDiploma";
  cin>>d;
  if(strcmpi(d,"GRADUATED")==0)
  {
    cout<<"\n In technical for graduation ";
    cout<<"\n B.TECH \nBCA \n B.ARCH";
   cout<<endl<<"enter your choice";cin>>degree[20];
    if(strcmpi(degree,"B.TECH")==0) 
    {
      cout<<"IN B.TECH THER ARE MORE BRANCHES SUCH AS \n SOFTWARE Engineering \nCIVIL Engineering \n ELECTRICAL Engineering ..etc";
      cout<<"TELL US ABOUT YOUR SKILLS ";
      cout<<"1 C++ "<<endl<<"2 python";
      cout<<" \n 3 java "<<endl<<"4 YOU KHOW ABOUTALL THE GIVEN LANGUAGES";
      cin>>skill;
      if(skill==1)
      {
        cout<<"        \n C++";
         cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;     
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     if(year>4)
     {
      cout<<"you are freshar now  as you c++ language";
        cout<<"you will get 7  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 1600 ";

     }
     if(year>8)
     {
      cout<<"you are freshar now  as you c++ language";
        cout<<"you will get 20  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -1,50,000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 3000 ";

     }
     if (year>12)
     {
      cout<<"you are experienced   as you c++ language \n you can try  for HR POSTION";
        cout<<"you will get 35  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL - 2,83,000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 4000 ";

     }
      }
      if(ask=='n')
      {
        cout<<"you are freshar now  as you c++ language";
        cout<<"you will get 3.4  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -26000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 1500 ";

      }
    }
    if(skill ==2)
    {   cout<<"\n python \n";
       cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;     
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     if(year>=4)
     {
      cout<<"you are freshar now  as you know python language .";
        cout<<"you will get 7  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 1600 ";

     }
     if(year>=8)
     {
      cout<<"you are freshar now  as you python language";
        cout<<"you will get 20  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -1,50,000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 3000 ";
     }
     if (year>=12)
     {
      cout<<"you are experienced   as you python language \n you can try  for HR POSTION";
        cout<<"you will get 35  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL - 2,83,000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 4000 ";
     }
      }
      if(ask=='n')
      {
        cout<<"you are freshar now  as you python language";
        cout<<"you will get 4 lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -26000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 1500 ";
      }
    }
    if(skill==2)
    {    cout<<"\n JAVA";
     cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;     
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     if(year>=4)
     {
      cout<<"you are experience now  as you know java language .";
        cout<<"you will get 7  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 1600 ";

     }
     if(year>=8)
     {
      cout<<"you are experience now  as you  know java language";
        cout<<"you will get 20  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -1,50,000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 3000 ";
     }
     if (year>=12)
     {
      cout<<"you are experienced   as you  know java language \n you can try  for HR POSTION";
        cout<<"you will get 35  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL - 2,83,000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 4000 ";
     }
      }
      if(ask=='n')
      {
        cout<<"you are freshar now  as you java language";
        cout<<"you will get 4 lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -26000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 1500 ";
      }
    }
    if(skill==4)
    {
      cout<<"you khow abhout * JAVA *PYTHON * C+";
       cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;     
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     if(year>=4)
     {
      cout<<"   you can achive highest post with these skills";
        cout<<"you will get 8  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 2000 ";

     }
     if(year>=8)
     {
      cout<<"  ";
        cout<<"you will get 22lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -1,50,000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 3000 ";
     }
     if (year>=12)
     {
      cout<<"  \n you can try  for HR POSTION";
        cout<<"you will get 40+  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL - 2,83,000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 4000 ";
     }
      }
      if(ask=='n')
      {
        cout<<" if you start working in field you will get highest pakage as fresha ";
        cout<<"you will get 8 lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 2000 ";
      }
    }
    }
    if (strcmpi(degree,"BCA")==0)
   { 
    cout<<"\n            BCA";
     cout<<"TELL US ABOUT YOUR SKILLS ";
      cout<<"1 C++ "<<endl<<"2 python";
      cout<<"\n 3 java "<<endl<<"4 YOU KHOW ABOUTALL THE GIVEN LANGUAGES";
      cin>>skill;
      if(skill==1)
      {
        cout<<"        \n C++";
         cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;     
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     if(year>=4)
     {
      cout<<"you are freshar now  as you c++ language";
        cout<<"you will get 7  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 1600 ";

     }
     if(year>=8)
     {
      cout<<"you are freshar now  as you c++ language";
        cout<<"you will get 20  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -1,50,000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 3000 ";

     }
     if (year>=12)
     {
      cout<<"you are experienced   as you c++ language \n you can try  for HR POSTION";
        cout<<"you will get 35  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL - 2,83,000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 4000 ";

     }
      }
      if(ask=='n')
      {
        cout<<"you are freshar now  as you c++ language";
        cout<<"you will get 3.4  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -26000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 1500 ";

      }
    }
    if(skill ==2)
    {   cout<<"\n python \n";
       cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;     
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     if(year>=4)
     {
      cout<<"you are freshar now  as you know python language .";
        cout<<"you will get 7  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 1600 ";

     }
     if(year>=8)
     {
      cout<<"you are freshar now  as you python language";
        cout<<"you will get 20  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -1,50,000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 3000 ";
     }
     if (year>=12)
     {
      cout<<"you are experienced   as you python language \n you can try  for HR POSTION";
        cout<<"you will get 35  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL - 2,83,000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 4000 ";
     }
      }
      if(ask=='n')
      {
        cout<<"you are freshar now  as you python language";
        cout<<"you will get 4 lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -26000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 1500 ";
      }
    }
    if(skill==2)
    {    cout<<"\n JAVA";
cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;     
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     if(year>=4)
     {
      cout<<"you are experience now  as you know java language .";
        cout<<"you will get 7  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 1600 ";

     }
     if(year>=8)
     {
      cout<<"you are experience now  as you  know java language";
        cout<<"you will get 20  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -1,50,000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 3000 ";
     }
     if (year>=12)
     {
      cout<<"you are experienced   as you  know java language \n you can try  for HR POSTION";
        cout<<"you will get 35  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL - 2,83,000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 4000 ";
     }
      }
      if(ask=='n')
      {
        cout<<"you are freshar now  as you java language";
        cout<<"you will get 4 lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -26000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 1500 ";
      }
    }
    if(skill==4)
    {
      cout<<"you khow abhout * JAVA *PYTHON * C+";
       cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;     
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     if(year>=4)
     {
      cout<<"   you can achive highest post with these skills";
        cout<<"you will get 8  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 2000 ";

     }
     if(year>=8)
     {
      cout<<"  ";
        cout<<"you will get 22lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -1,50,000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 3000 ";
     }
     if (year>=12)
     {
      cout<<"  \n you can try  for HR POSTION";
        cout<<"you will get 40+  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL - 2,83,000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 4000 ";
     }
      }
      if(ask=='n')
      {
        cout<<" if you start working in field you will get highest pakage as fresha ";
        cout<<"you will get 8 lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 2000 ";
      }
    }
   }
   if(strcmp(degree,"b.arch")==0)
   {
    cout<<"\n Bachlor of arcit";
   }

  }
    
    if (strcmpi(d,"POST GRADUATION")==0)
    {
      cout<<"\n M.TECH \nMCA ";
      cin>>masters;
      if(strcmpi(masters,"mtech")==0)
      {
       cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;     
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     if(year>=4)
     {
      cout<<"   you can achive highest post with these skills";
        cout<<"you will get 8  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 2000 ";

     }
     if(year>=8)
     {
      cout<<"  ";
        cout<<"you will get 22lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -1,50,000 PER MOUNTH APROXX \nFOR PF AND MEDICAL 3000 ";
     }
     if (year>=12)
     {
      cout<<"  \n you can try  for HR POSTION";
        cout<<"you will get 40+  lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL - 2,83,000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 4000 ";
     }
      }
      if(ask=='n')
      {
        cout<<" if you start working in field you will get highest pakage as fresha ";
        cout<<"you will get 8 lakhsapprox per annum ";
        cout<<"\n IN HAND YOU WILL -55000 PER MOUNTH APROXX \nFOR PR AND MEDICAL 2000 "; 
      }}
    }
}

void job::inter()
{
 int j;}

int main()
{ 
  job obj;
  string name1,name2;
  int ch;
  system ("cls");
  cout<<"\t\a            ###############PAYROL MANAGMENT SYSTEM##############";
  
   cout<<"\n Enter your first name";
  cin>>name1;
  cout<<"enter second name";
  cin>>name2;
  cout<<" your name"<<name1+" "+name2;
do{
   cout<<"tell us from which stream you come from";
   cout<<"\n 1 technical \n 2 non technical \n3 intermidiate";
   cin>>ch;
   switch(ch)
   {
    case 1:
      obj.tech();
      break;
    case 2:
       obj.non_tech();
       break;
    default:
      cout<<"invalid choice";
   }
  cout<<"do you want to perform again";
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