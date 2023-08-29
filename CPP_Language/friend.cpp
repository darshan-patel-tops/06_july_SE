#include<iostream>
using namespace std;

class check
{
	public :
		int a=10;
	protected :
		int b=20;
	private :
		int c=30;
	
	private :
	void daggabaaz()
	{
		cout<<"A is "<<this->a<<endl;
		cout<<"B is "<<this->b<<endl;
		cout<<"C is "<<this->c<<endl;
	}
	public :
		void seconddagabbaz()
		{
			this->daggabaaz();
		}
		friend void ultimatedagabaaz();
};

void ultimatedagabaaz()
{
	
	check c;
	cout<<c.a<<endl;
	cout<<c.b<<endl;
	cout<<c.c<<endl;
}




main()
{
//	check c;
//	check2 c;
//	cout<<c.a<<endl;	
//	cout<<c.b<<endl;	
//	cout<<c.c<<endl;
//	c.daggabaaz();	
//	c.seconddagabbaz();	

//	cout<<ultimatedagabaaz<<endl;
ultimatedagabaaz();
	
}