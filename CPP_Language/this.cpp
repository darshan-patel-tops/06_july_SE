#include<iostream>
using namespace std;



class calc
{
	public :
		int a,b;
		void add(int z,int y)
		{
			cout<<"Enter Value of A :"<<endl;
//			cin>>this->a;
			cout<<"Enter Value of B :"<<endl;
//			cin>>this->b;
			this->a = z;
			this->b = y;
			cout<<"Total is without this "<<z+y<<endl;
			cout<<"Total is with this "<<this->a+this->b<<endl;
			
			
		}	
		
		
		void sub(int z,int y)
		{
			cout<<"Enter Value of A :"<<endl;
//			cin>>this->a;
			cout<<"Enter Value of B :"<<endl;
//			cin>>this->b;
			this->a = z;
			this->b = y;
			cout<<"Total is "<<z+y<<endl;
			cout<<"Total is "<<this->a+this->b<<endl;
			this->add(34,23);
		}
};


main()
{
	calc c;
	c.add(20,10);
	c.sub(200,10);
}