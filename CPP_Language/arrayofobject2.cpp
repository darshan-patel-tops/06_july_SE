#include<iostream>
using namespace std;

class student
{
	public :
		float marks[5];
		float total=0;
		float percentage;
		string name;
		
		void input()
		{
			cout<<"Enter Your Name :"<<endl;
			fflush(stdin);
			getline(cin,name);
		
			for(int i=0;i<5;i++)
			{
				cout<<"Enter Your Marks :"<<endl;
				cin>>marks[i];
				total = total + marks[i];
			}
			
		}
		void display()
		{
			cout<<"Student Name is "<<name<<endl;
			cout<<"Total is "<<total/5<<" % "<<endl;
		}
};


main()
{
	cout<<"Enter Students "<<endl;
	int a;
	cin>>a;
	student s[a];
//	student paras;
	
	for(int i=0;i<a;i++)
	{
		s[i].input();
	}
	for(int i=0;i<a;i++)
	{
		s[i].display();
	}
	
	
}