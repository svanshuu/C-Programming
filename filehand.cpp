
#include<iostream>
#include<fstream>

using namespace std;
main()
{
	string rno,fee;
	string name;
	cout<<"hasdbsahb";
	ofstream fout;
	cout<<"fout";
	fout.open("student.doc");
	cout<<"open";
	 //write data to the file student
	while(fout){
		cout<<"enter rollno";
		getline(cin,rno);
		cout<<"enter fee";
		getline(cin,fee);
		cout<<"enter name";
		getline(cin,name);

		if(rno=="-1"){
			break;
		}

		fout<<rno<<endl<<fee<<endl<<name<<endl;
	}

	fout.close();

	ifstream fin;
	fin.open("student.doc");
	
	while(getline(fin,rno))
	{
		cout<<rno<<fee<<name;
	}

	fin.close();
    

	return 0;
}
