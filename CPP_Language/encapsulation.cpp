#include<iostream>
using namespace std;

//Rice
//Water
//fire
//Oil
//Paneer
//Carrot
//Peas
//Onion
//Tomato
//chiily
//Capsicum
//Dhaniya
//Salt
//Haldi
//Mirchi
//Eliachi





//Wrapping up the data in a single unit
class biryani
{
	public :
		void rice()
		{
			cout<<"Rice"<<endl;	
		}	
		void elaichi()
		{
			cout<<"elaichi"<<endl;	
		}	
		void carrot()
		{
			cout<<"carrot"<<endl;	
		}	
		void tamato()
		{
			cout<<"tamato"<<endl;	
		}	
};


main()
{
	biryani karankibiryani;
	
	karankibiryani.carrot();
	karankibiryani.elaichi();
	karankibiryani.rice();
	karankibiryani.tamato();
	
}