#include<iostream>
using namespace std;

//Asbtraction is data hiding

class rbi
{
	public :
	virtual	void   interest();
	void deposit();
};


class hdfc : public rbi
{
	public :
	void withdraw()
	{
		cout<<"withdraw"<<endl;
		}
		void interest()
		{
			cout<<"Give Interest"<<endl;
			}	
};
main()
{
//	rbi r;
//	r.interest();
//virtual class ka object nahi bana skte


hdfc bank;
bank.withdraw();

}