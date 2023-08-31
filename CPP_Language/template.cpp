#include<iostream>
using namespace std;

template<class obj>
obj cube(obj &number)
{
	return number*number*number;
}


int main()
{
	int num;
	cout<<"Enter A Number : "<<endl;
	cin>>num;
	cout<<"Cube of "<<num<<" is : "<<cube(num)<<endl;
	
}