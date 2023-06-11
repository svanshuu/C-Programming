#include<iostream>
#include<fstream>
 
using namespace std;
 
main()
{
      int rno,fee;
      char name[50];
   
      //ifstream fin("d:/student.doc");
   
     // fin>>rno>>name>>fee;   //read data from the file student
   
     // fin.close();
   
     // cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;

  fstream new_file; 
new_file.open("student.txt",ios::in);   
if(!new_file) 
cout<<"No such file"; } 
else 
{ char ch; while (!new_file.eof()) 
{ 
    new_file >>ch; 
cout << ch;   
}
new_file.close(); 
      return 0;   
}