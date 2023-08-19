#include<iostream>
using namespace std;



class petrolcar
{
	public :
		void metal()
		{
			cout<<"Metal"<<endl;	
		}	
		void seat()
		{
			cout<<"Seat"<<endl;
		}
		void tyre()
		{
			cout<<"Tyre"<<endl;
		}
		void engine()
		{
			cout<<"Engine"<<endl;
		}
		
};




class evcar  : public petrolcar
{
		public :
			void battery()
			{
				cout<<"Battery"<<endl;
			}
};



main()
{
	evcar e;
	e.battery();
	e.engine();
	e.metal();
	e.seat();
	e.tyre();
}