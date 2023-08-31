#include<iostream>
using namespace std;
#include<fstream>

int main()
{
	string name;
	ofstream inputfile;
	
	inputfile.open("tops1.html",ios::app);
	cout<<"Enter Data : "<<endl;
	getline(cin,name);
	
	inputfile<<name;
	inputfile.close();
	
	
	ifstream outputfile;
	outputfile.open("tops1.html",ios::in);
	getline(outputfile,name);
	cout<<name;
	
}

