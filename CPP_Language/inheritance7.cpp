#include<iostream>
using namespace std;


class dada 
{
	public :
		void zameen()
		{
			cout<<"Dada ki zameen"<<endl;
		}
};


class papa : virtual public dada
{
	public :
		
//			using dada::zameen;
		void house()
		{
			cout<<"House"<<endl;
		}
};

class kaka : virtual public dada
{
	public :
		
//			using dada::zameen;
		void car()
		{
			cout<<"Car"<<endl;
		}
};


class aap : public papa,public kaka
{
	public :
//			using kaka::zameen;
//			using dada::zameen;
		void bike()
		{
			cout<<"Bike"<<endl;
		}
};



main()
{
	aap a;
	a.bike();
	a.car();
	a.house();
	a.zameen();
}