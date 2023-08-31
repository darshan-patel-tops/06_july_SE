#include<iostream>
using namespace std;


class mobile
{
	public :
			~mobile()
		{
			cout<<"See you again"<<endl;
			}
		mobile(int a)
		{
			cout<<"Welcome to our website"<<endl;
			cout<<a<<endl;
			}
			
		void call()
		{
			cout<<"call"<<endl;
			}
		
};




main()
{
	mobile m(4);
	m.call();
	m.call();
	m.call();
	m.call();
	m.call();
	//Constructor is invoked by default whenever object is created
	//Destructor is called at last after all funcitons
}