#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class bank{

    string name1,name2,address,address1,address2,phone,phone1,phone2,email,email1, company1,company2,email2,pasward ,pasward1,pasward2,dob,dob1,dob2 ,bankcode="10",accno,bankuser;
    
    float amount;
    int age,user=1,ask,choice ,age1,age2,ask1,ask2;
    public:
    void new_bank_acc();
    void deposite_money();
    void withdraw_money();
    void balance_enqiry();
    //void bank_acc_holder();
    void close_bank_acc();
    void update_acc();
    void  exit();
};
void bank::new_bank_acc()
{
system ("cls");
cout <<"***NEW BANK ACCOUNT:::";
cout<<"\n\nthanks for  banking with us for complete the process fill further details";
cout<<"\n what type of account do you want ";
cout<<"\n\n1)SAVING \n2)CUREENT";
cin>>ask;
if(ask==1)
{
    cout<<"YOU CHOSSE SAVING ACCOUNT";
    cout<<"\n DO YOU WANT ";
    cout<<"\n 1)FOR SINGLE 2)FOR JOINT ";
    cin>>choice;
    if (choice==1)
    {
       cout<<"\nEnter your first name::::";
cin>>name1;
cout<<"\nenter last name";
cin>>name2;
cout<<"\nyour name"<<name1+" "+name2;
cout<<"\nEnter your permanent address::";
cin>>address;
cout<<"\nenter your email>>";
cin>>email;
cout<<"\nenter your mobile number";
cin>>phone;
int lengthofphone=phone.length();
if(phone.length()==10)
{
}
else{
    cout<<"invalid phone no must of length of 10 \n try again";
cout<<"\nenter your mobile number";
cin>>phone;
}
cout<<"\nenter amount";
cin>>amount;
cout<<"\nenter your age";
cin>>age;
cout<<"\nenter pasward for login";
cin >>pasward;
cout<<"\nEnter your dsate of birth";
cin>>dob;
bankuser=to_string(user);
accno=bankcode+dob+bankuser;
user=user+1;

cout<<"your account number is="<<accno;
cout<<"\n\n                 ║thanks for login with us║";
    }
    }
    if (choice==2)
    
    {
        cout<<"\n\nit a joint saving account::";
        cout<<"\nEnter first user name::::";
        cin>>name1;
        cout<<"\nenter second user name";
        cin>>name2;
        cout<<"\naccount holder"<<name1+" &"+name2;
       cout<<"\nEnter your permanent address of first user::";
        cin>>address1;
       cout<<"\nEnter your permanent address of second user::";
       cin>>address2;
       cout<<"\nenter your email for second>>";
cin>>email1;
cout<<"\nenter your mobile number of first user";
cin>>phone1; 
int lengthofphone1=phone1.length();
if(phone1.length()==10)
{
}
else{
    cout<<"invalid phone no must of length of 10 \n try again";
cout<<"\nenter your mobile number";
cin>>phone1;}
cout<<"\nenter your email for first>>";
cin>>email2;
cout<<"\nenter your mobile number of second user";
cin>>phone2;
int lengthofphone2=phone2.length();
if(phone.length()==10)
{
}
else{
    cout<<"invalid phone no must of length of 10 \n try again";
cout<<"\nenter your mobile number";
cin>>phone;
    }
    cout<<"\nenter age of first person";
cin>>age1;
cout<<"\nenter age of second person";
cin>>age2;
cout<<"\nenter pasward for login";
cin >>pasward;
cout<<"enter first user dob";
cin>>dob1;
cout<<"enter second user dob";
cin>>dob2;
bankuser=to_string(user);
accno=bankcode+dob1+dob2+bankuser;
user=user+1;

cout<<"your account number is="<<accno;
}
if(ask==2)
{
    cout<<"\nYOU CHOOSE CURRENT ACCOUNT";
    cout<<"what type of account in current you want";
    cout<<"\n1)SALERY ACCOUNT \n2)BUSINESS ACCOUNT";
    if(ask1==1)
    {
        cout<<"\n\n YOU CHOSSE SALERY ACCOUNT"; 
 cout<<"\nEnter your first name::::";
cin>>name1;
cout<<"\nenter last name";
cin>>name2;
cout<<"\nyour name"<<name1+" "+name2;
cout<<"\nEnter your permanent address::";
cin>>address;
cout<<"\nenter your email>>";
cin>>email;
cout<<"\nenter your mobile number";
cin>>phone;
cout<<"\n enter your company no";
cin>>company1;
int lengthofphone=phone.length();
if(phone.length()==10)
{
}
else{
    cout<<"invalid phone no must of length of 10 \n try again";
cout<<"\nenter your mobile number";
cin>>phone;
}
cout<<"\nenter amount";
cin>>amount;
cout<<"\nenter your age";
cin>>age;
cout<<"\nenter pasward for login";
cin >>pasward;
cout<<"\nEnter your dsate of birth";
cin>>dob;
bankuser=to_string(user);
accno=bankcode+dob+bankuser;
user=user+1;

cout<<"your account number is="<<accno;
cout<<"\n\n                 ║thanks for login with us║";
}
if(ask1==2)
{
cout<<"\nYOU CHOOSE CURRENT ACCOUNT";
cout<<"\n WHAT TYPE OF CURRNET ACCOUNT DO YOU WANT";
cout<<"\n1)single\n2)joint";
cin>>ask2;
if(ask2==1)
{
     cout<<"\nEnter your first name::::";
cin>>name1;
cout<<"\nenter last name";
cin>>name2;
cout<<"\nyour name"<<name1+" "+name2;
cout<<"\nEnter your permanent address::";
cin>>address;
cout<<"\nenter your email>>";
cin>>email;
cout<<"\nenter your mobile number";
cin>>phone;
cout<<"\n enter your bussiness name";
cin>>company1;
int lengthofphone=phone.length();
if(phone.length()==10)
{
}
else{
    cout<<"invalid phone no must of length of 10 \n try again";
cout<<"\nenter your mobile number";
cin>>phone;
}
cout<<"\nenter amount";
cin>>amount;
cout<<"\nenter your age";
cin>>age;
cout<<"\nenter pasward for login";
cin >>pasward;
cout<<"\nEnter your dsate of birth";
cin>>dob;
bankuser=to_string(user);
accno=bankcode+dob+bankuser;
user=user+1;

cout<<"your account number is="<<accno;
cout<<"\n\n                 ║thanks for login with us║";

}

}
}
}
void bank::deposite_money()
{
    string acc_holder;
    int money;
    cout<<"enter your detalis for further process::";
    cout<<"\n Enter your name";
    cin>>acc_holder;
    cout<<"\n enter amount";
    cin>>money;
    cout<<"enter your account number";
    cin>>accno;
    amount=amount+money;
    cout<<"your balance after deposite"<<amount;
}
void bank::withdraw_money()
{
    int money;
    string accno,acc_holder;
    cout<<"enter your detalis for further process::";
    cout<<"\n Enter your name";
    cin>>acc_holder;
    cout<<"\n enter   amount to withdraw";
    cin>>money;
    cout<<"enter your account number";
    cin>>accno;
    amount=amount-money ;
    cout<<"\n now your balanceis"<<amount;
}
void bank::balance_enqiry()
{
    cout<<"\nenter your acc no";
    cin>>accno;
    cout<<"\nyour currnet balance is";
    cout<<amount;
}
void bank::update_acc()
{
    int update_choice;
    cout<<"what do you want to change";
    cout<<"you can only change only these::";
    cout<<"\n 1PASWARD \n2 EMAIL \nADDRESS \nphone no ";
    cin>>update_choice;
    switch(update_choice) 
    {
        case 1:
           cout<<"enter your new passward";
           cin>>pasward;
           cout<<"updated pasward"<<pasward;
           break;
        case 2:
           cout<<"\nEnter your new mail";
           cin>>email;
           cout<<"update email"<<email;
           break;
        case 3:
          cout<<"\n enter new address";
          cin>>address;
          cout<<"updated address"<<address;
          break;
        case 4:
          cout<<"\nenter your mobile number";
          cin>>phone;
          int lengthofphone=phone.length();
          if(phone.length()==10)
         {
         }
            else{
           cout<<"invalid phone no must of length of 10 \n try again";
           cout<<"\nenter your mobile number";
           cin>>phone;
            }
            cout<<"update phone no is"<<phone;
            break;
cout<<name1<<endl<<age<<endl<<accno<<address<<endl<<pasward<<endl<<email;
               }
}

int main()
{
    int ch;
    char ask;
    bank obj;
    system ("cls");
    cout<<"                                 ## BANKING MANAGMANET SYASTEM###";
   // cout<<"gotpxy(15,8) hii";
    do {
        cout<<"\n          1) NEW BANK ACCOUNT";
        cout<<"\n          2) MONEY DEPOSITE";
        cout<<"\n          3) Withdraw";
        cout<<"\n          4) Balance enquiry";
        cout<<"\n          5) All bank acc holder";
        cout<<"\n          6) Close bank account";
        cout<<"\n          7) Update your account";
        cout<<"enter your chioce =";
        cin>>ch;
        switch (ch){
            case 1:
            obj.new_bank_acc();
            break;
            case 2:
              obj.deposite_money();
              break;
            case 3:
              obj.withdraw_money();
              break;
            case 4:
             obj.balance_enqiry();
             break;
            case 7:
              obj.update_acc();
              break;
        default:
        cout<<"\nINVALID CHOICE";
        }
        cout<<"do you want to perform again";
        cout<<"\n Y)yess \n N) no";
        cin>>ask;
        if(ask=='N'||ask=='n')
        {
            cout<<exit;
            break;
        }
    } 
    while(ask=='Y'||ask=='y');
    
    return 0;
}
