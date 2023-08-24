#include<iostream>
using namespace std;


//It is not compulsory to give them a body
class relationship
{
	public :
		virtual void goodnight();
		virtual void goodmorning();
		virtual void gifts();
};


class neet : public relationship
{
	public :
		void gifts()
		{
			cout<<"Gift"<<endl;
		}
		void goodnight()
		{
			cout<<"Good night"<<endl;
		}
		void goodmorning()
		{
			cout<<"goodmorning"<<endl;
		}
};


main()
{
	neet n;
	n.gifts();
	n.goodmorning();
	n.goodnight();
}

