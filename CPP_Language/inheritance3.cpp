#include<iostream>
using namespace std;


class calc
{
	public :
		
		int a,b;
		void add()
		{
			cout<<"A"<<endl;
			cout<<"B"<<endl;
			cin>>a>>b;
			cout<<"Total is "<<a+b;
		}
};

class calc2
{
	public :
				int a,b;

		void sub()
		{
			cout<<"A"<<endl;
			cout<<"B"<<endl;
			cin>>a>>b;
			cout<<"Total is "<<a-b;
		}
};
class calc3 : public calc,public calc2
{
	public :
				int a,b;

		void mul()
		{
			cout<<"A"<<endl;
			cout<<"B"<<endl;
			cin>>a>>b;
			cout<<"Total is "<<a*b;
		}
};





main()
{
	calc3 c;
	c.add();
	c.mul();
	c.sub();
}