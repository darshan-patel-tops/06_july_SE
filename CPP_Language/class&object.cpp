#include<iostream>

using namespace std;

class iphone
{
	//it consists of data member and member function only
	
	//Access Modifier
//	public : It is like water / cycle
//	protected : it is like juice / Santro
//	private : it is like expensive wine / Rolls Royce
	
	public :
		
	void chat()
	{
		cout<<"Chatting"<<endl;
	}
	void phone()
	{
		cout<<"Phone"<<endl;
	}
	void utube()
	{
		cout<<"Youtube"<<endl;
	}
	void muzik()
	{
		cout<<"Muzik"<<endl;
	}
};


main()
{
	
	cout<<"Welcome to our Mobile Shop"<<endl;
	
	//Object is required to access class
	// it is an instance of class
	
	iphone neetkaphone;
	
	neetkaphone.chat();
	neetkaphone.utube();
	neetkaphone.muzik();
	neetkaphone.phone();
	
//	chat();
}