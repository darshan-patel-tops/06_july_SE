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


class kaka : public dada
{
	
};
class papa : public dada
{
	
};
class chacha : public dada
{
	
};


main()
{
	chacha c;
	kaka k;
	papa p;
	
	
	p.zameen();
	c.zameen();
	k.zameen();
}