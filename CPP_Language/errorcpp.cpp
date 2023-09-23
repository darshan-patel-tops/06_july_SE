#include<iostream>
#include<string.h>
#include <ctime>

using namespace std;




class atm
{

    public:

     atm()
    {
        cout<<"----------welcome to atm---------- "<<endl;
        time_t now = time(0);

          char* date_time = ctime(&now);

         cout << "The current date : " << date_time << endl;

        char choice;
        int num;

        cout<<"press 1 and then press enter to access your account via pin no "<<endl;

        cout<<"        or      "<<endl;
        cout<<"press 0 and enter to get help."<<endl;
        cin>>num;
       
        if (num==1)
        {
        int pin;
        cout<<"----------atm account access----------"<<endl;
        cout<<"enter your acc pin access number! [onaly one attempt allowed]"<<endl;
        cin>>pin;
        if(pin == 1234)
        {
        cout<<"inaisw if";
}
else
{
cout<<"inaisw wkaw";
}
}
else if (num==0)
{
cout<<"you must have the correct pin number to access this acc. see your "<<endl;
        cout<<" bank representativa for assistance during bank opening hours"<<endl;
        cout<<"   thanks for, your choice today!!"<<endl;
        cout<<"press any key to countinue"<<endl;
        char alphabate;
        cin>>alphabate;
//getline(cin,alphabate);
//        if(alphabate == alphabate)
//        {
//         cout<<"     thank you     "<<endl;
//         cout<<"you had made your attemp which failed !!! no more attempts allowed!! sorry!!"<<endl;
//         cout<<"press any key to countinue"<<endl;
// }
// else
// {
// cout<<"no";
// }
    }
    else
    {
   			cout<<"int"<<endl;
}

}
};

int main()
{
    atm a;
}
