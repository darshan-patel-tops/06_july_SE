#include<iostream>
using namespace std;


class student
{
	public :
		string name;
		int age;
		int marks;
		int total=0;
		void student1()
		{
			cout<<"Enter Your Name :"<<endl;
			fflush(stdin);
			getline(cin,name);
			for(int i=0;i<5;i++)
			{
				
			cout<<"Enter Marks "<<endl;
			cin>>marks;
			total += marks;
			}
			cout<<total<<endl;
		}
	
};

main()
{
	student paras;
	student jaydeep;
	paras.student1();
	jaydeep.student1();
	
}
