#include<iostream>
using namespace std;


//Two Types of polymorphism
	// 1 run time
	// 2 compile time
		// Overloading
		// Overriding


class calc
{
	public :
		void add(int a,int b)
		{
			cout<<"Inside parent class"<<endl;
			cout<<"Total is "<<a+b<<endl;
		}
};

class calc2 : public calc
{
		public :
		using calc::add; // over loading
		
		
		//over riding
			void 
			(int a,int b,int c)
			{
				cout<<"Inside child class"<<endl;
				cout<<"Total is "<<a+b+c<<endl;
			}
};


main()
{
	calc2 c;
	c.add(1,2,3);  //over riding
	c.add(1,2);  // over laoding
}