#include<iostream>
using namespace std;


class calculator
{
		public :
			
			int a,b;
			void add()
			{
				cout<<"Enter Value of A : "<<endl;
				cin>>a;	
				cout<<"Enter Value of B : "<<endl;
				cin>>b;
				cout<<"Total is : "<<a+b<<endl;	
			}	
			
			void sub()
			{
				
				cout<<"Enter Value of A : "<<endl;
				cin>>a;	
				cout<<"Enter Value of B : "<<endl;
				cin>>b;
				cout<<"Total is : "<<a-b<<endl;	
			}
			void div()
			{
				
				cout<<"Enter Value of A : "<<endl;
				cin>>a;	
				cout<<"Enter Value of B : "<<endl;
				cin>>b;
				cout<<"Total is : "<<a/b<<endl;	
			}
			void mul()
			{
				
				cout<<"Enter Value of A : "<<endl;
				cin>>a;	
				cout<<"Enter Value of B : "<<endl;
				cin>>b;
				cout<<"Total is : "<<a*b<<endl;	
			}
};


main()
{
	calculator calc;
	
	calc.add();
	calc.div();
	calc.mul();
	calc.sub();
	
	
}