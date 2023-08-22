#include<iostream>


using namespace std;



class rbi
{
	virtual void interest();
	void smscharge()
	{
		cout<<"Sms Charge";
	}
	virtual void loan();
};

class bank : public rbi
{	
	public :
		void deposit()
		{
			cout<<"Deposit"<<endl;
		}	
		void withdraw()
		{
			cout<<"Withdraw"<<endl;
		}	
		void interest()
		{
			cout<<"150 Rupya dega"<<endl;
		}
		
		void loan()
		{
			cout<<"loan"<<endl;
		}
};




main()
{
	bank b;
	b.deposit();
	b.withdraw();
	b.interest();
}