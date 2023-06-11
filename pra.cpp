#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int r=1;r<=n;r++)
	{
		for(int j=1;j<=n;j++)
		{
			
			if(r==1||r==n)
			{
				cout<<"5";
			}
            else if(j==1||j==n)
            {
                cout<<"5";
            }
			
		   if(r==2||r==4||j==2||j==4)	
		{
			cout<<"4";
		}
		if(r==3||j==3){
			cout<<"3";
		}
		else 
			cout<<"2";
		
	
	} cout<<endl;
	}
	return 0;
}