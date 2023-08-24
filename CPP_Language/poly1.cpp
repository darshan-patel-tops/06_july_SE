#include<iostream>
using namespace std;

class calc
{
	public :
		void add(int a,int b)
		{
			cout<<"Total is "<<a+b<<endl;	
		}	
		void add(int a,int b,int c)
		{
			cout<<"Total is "<<a+b+c<<endl;	
		}	
		void add  (float a,float b,float c,float d) 
		{
			cout<<"Total is "<<a+b+c+d<<endl;	
		}	
//		void add(float a,float b,float c)
//		{
//			cout<<"Total is "<<a+b+c<<endl;	
//		}	
//		void add(int a,float b)
//		{
//			cout<<"Total is "<<a+b<<endl;	
//		}	
};


main()
{
	calc c;
	c.add(1,2);
	c.add(1,2,3);
	c.add(1.45,2.34,34.45,12.54);
}