 #include<iostream>
using namespace std;
class person
{
int id;
string name;
public :
  void setp()
  {
    cout<<"\nenter the id";
    cin>>id;
    cout<<" enter the name";
    cin>>name;
  }
  void displayp()
  {
    cout<<id<<name;
    cout<<endl;
  }
};
class student :private person{
    string course;
    int fee;
    public:
    void sets(){
    
        setp();
        cout<<"enter course";
        cin>>course;
        cout<<"enter couse fee";
        cin>>fee;
    }
    void displays()
    {
        displayp();
        cout<<course<<fee;
        cout<<endl;
    }
};
class proffesional:private person{
    string companyn;
    int sal;
    public:
    void setpr(){
    
        setp();
        cout<<"comapny name??";
        cin>>companyn;
        cout<<"enter your salary";
        cin>>sal;
    }
    void displaypr()
    {
        displayp();
        cout<<companyn<<sal;
        cout<<endl;
    }
};
int main(){
    student s;
    proffesional p;
    s.sets();
    s.displays();
    p.setpr();
    p.displaypr();

}     