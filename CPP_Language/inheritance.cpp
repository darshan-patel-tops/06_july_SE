#include<iostream>
using namespace std;


class dada
{
	public :
	void zameen()
	{
		cout<<"Zameen"<<endl;
	}	
};

class papa : public dada
{

};


main()
{
	papa p;
	p.zameen();
}