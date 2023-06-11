#include<iostream>
#include<string.h>
using namespace std;
int main()
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
    }}
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
   }}
}