#include<iostream>
using namespace std;

class papa
{
	public :
		void zameen()
		{
			cout<<"Zameen"<<endl;
		}
};

class mummy
{
	public :
		void car()
		{
			cout<<"car"<<endl;
		}
};
class beta : public papa,public mummy
{
	public :
		void bike()
		{
			cout<<"bike"<<endl;
		}
};



main()
{
	beta b;
	b.zameen();
	b.car();
	b.bike();
}