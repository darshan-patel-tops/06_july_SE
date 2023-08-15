#include<iostream>
using namespace std;


main()
{
	string name;
	
	cout<<"Enter Your name :"<<endl;
//	cin>>name;
	getline(cin,name);
	
	cout<<"Your name is "<<name<<endl;
}