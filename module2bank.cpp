#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
class bank
{ 
    string name1,name2,address,address1,address2,phone,phone1,phone2,email,email1, company1,company2,email2,pasward ,pasward1,pasward2,dob,dob1,dob2 ,bankcode="10",accno,bankuser;
    
    float amount;
    int age,user=1,ask,choice ,age1,age2,ask1,ask2;
   public:
    void new_bank_acc();
     void deposite_money();
    void withdraw_money();
    void balance_enqiry();
    void bank_acc_holder();
    void close_bank_acc();
    void update_acc();
    void  exit();
};
void single()
{
    string name1,name2,address,address1,address2,phone,phone1,phone2,email,email1, company1,company2,email2,pasward ,pasward1,pasward2,dob,dob1,dob2 ,bankcode="10",accno,bankuser;
    
    float amount;
    int age,user=1,ask,choice ,age1,age2,ask1,ask2;
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

