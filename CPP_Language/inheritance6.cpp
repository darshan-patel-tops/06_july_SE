#include<iostream>
using namespace std;


class dada
{
	public :
		void zameen()
		{
			cout<<"Dada ki Zameen"<<endl;
		}
};
class papa : public dada
{
	public :
		
		void zameen()
		{
			cout<<"Papa ki zameen"<<endl;
		}
		void house()
		{
			cout<<"House"<<endl;
		}
};
class beta : public papa
{
	public :
		void zameen()
		{
			cout<<"Bete ki zameen"<<endl;
		}
		void car()
		{
			cout<<"Car"<<endl;
		}
};



main()
{
	
	beta b;
	b.car();
	b.house();
	b.zameen();
	
}