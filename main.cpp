#include "onlineBanking.h"
using namespace std;
//vector<vector<string>, string> content;
//vector<string> row;
string username;

//Current Time and Date ====> Time Stamp <t_Stamp> ---------
time_t now = time(0);
char* t_Stamp = ctime(&now);

class landingPage {
    public:
        void currentPage(){
            int r=21, c=61, i, j, choice;

            system("cls");
            cout<<endl<<endl;
            for(i=0; i<r; i++)
            {
                for(j=0; j<c; j++)
                {   
                    if(i<r && j==0)
                        cout<<"\t\t\t";

                    if(i==0 && j==1){
                        cout<<"Author: Divyaveer ";
                        j+=9;
                    }

                    if(i==1 && j==27){
                        cout<<"State Bank Of India ";
                        j+=10;
                    }

                    if(i==4 && j==24){
                        cout<<"Online Banking Customer Service ";
                        j+=16;
                    }

                    if(i==7 && j==30){
                        cout<<"Welcome ";
                        j+=4;
                    }

                    if(i==0 && j==55){
                        cout<<"HOME PAGE ";
                        j+=5;
                    }

                    if(i==10 && j==3){
                        cout<<"Press:----";
                        j+=5;
                    }

                    if(i==11 && j==5){
                        cout<<"1. Register ";
                        j+=6;
                    }

                    if(i==12 && j==5){
                        cout<<"2. Login";
                        j+=4;
                    }

                    if(i==13 && j==5){
                        cout<<"3. Forgot Password";
                        j+=9;
                    }

                    if(i==14 && j==5){
                        cout<<"4. Exit ";
                        j+=4;
                    }

                    if(i==r-1 && j==48){
                        cout<<t_Stamp;
                        j=c;
                    }

                    if(i==r-1 && j==1){
                        cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad) ";
                        j+=21;
                    }

                    if(i==2 && j<c){
                        cout<<"* ";
                    }else if(i==6 && j<c){
                        cout<<"* ";
                    }else if(i==8 && j<c){
                        cout<<"* ";
                    }
                    else if(i==18 && j<c){
                        cout<<"* ";
                    }
                    else if ((i==0 && j<c) || ((i<r-1 && i!=0) && (j==0 || j==c-1)) || (i==r-1 && j<c))
                        cout << "* ";
                    else
                        cout<<"  ";
                }
                        cout << endl;
            }
            cout<<endl<<endl;

            cout<<"\t\t\tEnter your Choice : ";
            cin>>choice;

            switch(choice){
                case 1:
                    registerPage();
                    break;
                case 2:
                    loginPage();
                    break;
                case 3:
                    forgotPasswordPage();
                    break;
                case 4:
                    exit(0);
                    break;
                default:
                    system("cls");
                    cout<<"\n\n\t\tInvalid Input!!! Try Again.....\n\n";
                    currentPage();
            }
        }

        void registerPage(){
            string userid, password, address, fname, lname, gender, mobile, line, word;
            int age, temp=0;

            system("cls");
            if(temp == 1){
                cout<<"\n\n\t\tUsername already exist!!! Try again.......\n\n";
            }

            cout<<"\t\t\t\t         Welcome to State Bank of Bharat";
            cout<<"---------------------------------------------------------------------------------------------\n";
            cout<<"\t\t\t\t        Registration Page    \n\n";
            cout<<"---------------------------------------------------------------------------------------------\n";

            cout<<"\t\t\tEnter your First Name : ";
            cin>>fname;

            cout<<"\n\t\t\tEnter your Last Name : ";
            cin>>lname;

            cout<<"\n\t\t\tEnter your Userid : ";
            cin>>userid;

            // fstream file("database\\"+userid+".txt", ios::out);

            // if(!file.fail()){
            //     system("cls");
            //     temp=1;
            //     registerPage();
            // }else{
            //     file<<t_Stamp;

            //     while(getline(file, line)) {
            //         row.clear();
        
            //         stringstream str(line);				//----> ???????????
        
            //         while(getline(str, word, ','))
            //             row.push_back(word);
            //         content.push_back(row);
            //     }

                // row.clear();
                // row.push_back(userid);
                // content.push_back(row);

                cout<<"\n\t\t\tEnter your Password : ";
                cin>>password;
                // row.clear();
                // row.push_back(password);
                // content.push_back(row);

                cout<<"\n\t\t\tEnter your Mobile Number : ";
                cin>>mobile;
                // row.clear();
                // row.push_back(mobile);
                // content.push_back(row);

                cout<<"\n\t\t\tEnter your Address : ";
                cin.ignore(); 
                getline(cin, address);
                // row.clear();
                // row.push_back(address);
                // content.push_back(row);

                cout<<"\n\t\t\tEnter your gender : ";
                cin>>gender;

                cout<<"\n\t\t\tEnter your Age : ";
                cin>>age;                
            }

        void loginPage() {

        }

        void forgotPasswordPage() {

        }
};

class customisedDashboardPage : public landingPage {
    public:
        void customisedPage() {
            string line, word;
            int choice;

            int r=11, c=61, i, j;

            system("cls");
            cout<<endl<<endl;

            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    if(i<r && j==0)
                        cout<<"\t\t\t";

                    if(i==0 && j==1){
                        cout<<"Author: Divyaveer ";
                        j+=9;
                    }

                    // if(i==1 && j==25){
                    //     cout<<"Welcome "<<content[1][0]<<" ";
                    //     j+=9;
                    // }

                    if(i==0 && j==48){
                        cout<<" Customised Dashboard ";
                        j+=11;
                    }

                    if(i==4 && j==4){
                        cout<<"Press:----";
                        j+=5;
                    }

                    if(i==5 && j==6){
                        cout<<"1. Customer Dashboard ";
                        j+=11;
                    }

                    if(i==6 && j==6){
                        cout<<"2. Add another Account";
                        j+=11;    
                    }

                    if(i==7 && j==6){
                        cout<<"3. Change Password";
                        j+=9;
                    }

                    if(i==8 && j==6){
                        cout<<"4. Logout ";
                        j+=5;
                    }

                    if(i==r-1 && j==48){
                        cout<<t_Stamp;
                        j=c;
                    }

                    if(i==r-1 && j==1){
                        cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad) ";
                        j+=21;
                    }

                    if(i==2 && j<c)
                        cout<<"* ";
                    else if ((i==0 && j<c) || ((i<r-1 && i!=0) && (j==0 || j==c-1)) || (i==r-1 && j<c))
                        cout << "* ";
                    else
                        cout<<"  ";
                }
                cout<<endl;
            }

            cout<<"\n\n\t\t\tEnter your Choice: ";
            cin>>choice;

            cout<<endl<<endl;
        }

        void customerDashboard() {

        }

        void addAnotherAccount() {

        }

        void changePassword() {

        }

        void logout() {

        }
};
class customerDashboardPage {
    public:
        class customisedDashboardPage dashboard;
        string currAcc, ppfAcc;
        
        void customerDashboard() {
            int r=12, c=61, i, j, choice;

            system("cls");
            cout<<endl<<endl;
            for(i=0; i<r; i++)
            {
                for(j=0; j<c; j++)
                {   
                    if(i<r && j==0)
                        cout<<"\t\t\t";

                    if(i==0 && j==1){
                        cout<<"Author: Divyaveer ";
                        j+=9;
                    }

                    if(i==1 && j==25){
                        cout<<"Customer Dashboard";
                        j+=9;
                    }

                    if(i==4 && j==4){
                        cout<<"Press:----";
                        j+=5;
                    }

                    if(i==5 && j==6){
                        cout<<"1. View Savings Account ";
                        j+=12;
                    }

                    if(i==6 && j==6){
                        if(currAcc == "y"){
                            cout<<"2. View Current Account ";
                            j+=12;
                        }else if(currAcc != "y" && ppfAcc == "y"){
                            cout<<"2. View Public Provided Fund Account";
                            j+=18;
                        }else if(currAcc != "y" && ppfAcc != "y"){
                            cout<<"2. Logout ";
                            j+=5;
                        }
                    }

                    if(i==7 && j==6){
                        if(currAcc == "y" && ppfAcc == "y"){
                            cout<<"3. View Public Provided Fund Account";
                            j+=18;
                        }else if(currAcc == "y" || ppfAcc == "y"){
                            cout<<"3. Logout ";
                            j+=5;
                        }else{
                            cout<<"3. Back ";
                            j+=4;
                        }
                    }

                    if(i==8 && j==6){
                        if(currAcc == "y" && ppfAcc == "y"){
                            cout<<"4. Logout ";
                            j+=5;
                        }else if(currAcc == "y" || ppfAcc == "y"){
                            cout<<"4. Back ";
                            j+=4;
                        }
                    }

                    if(i==9 && j==6){
                        if(currAcc == "y" && ppfAcc == "y"){
                            cout<<"5. Back ";
                            j+=4;
                        }
                    }

                    if(i==r-1 && j==48){
                        cout<<t_Stamp;
                        j=c;
                    }

                    if(i==r-1 && j==1){
                        cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad) ";
                        j+=21;
                    }

                    if(i==2 && j<c)
                        cout<<"* ";
                    else if ((i==0 && j<c) || ((i<r-1 && i!=0) && (j==0 || j==c-1)) || (i==r-1 && j<c))
                        cout << "* ";
                    else
                        cout<<"  ";
                }
                        cout << endl;
            }
            cout<<endl<<endl;

            cout<<"\t\t\tEnter your Choice : ";
            cin>>choice;

            if(choice == 1){
                viewSavingsAccount();
            }else if(choice == 2){
                if(currAcc == "y" && ppfAcc != "y"){
                    viewCurrentAccount();
                }else if(ppfAcc == "y" && currAcc != "y"){
                    viewPublicProvidedFundAccount();
                }else if(currAcc != "y" || ppfAcc != "y"){
                    dashboard.logout();
                }
            }else if(choice == 3){
                if(currAcc == "y"){
                    viewPublicProvidedFundAccount();
                }else if(currAcc != "y" || ppfAcc != "y"){
                    dashboard.logout();
                }else if(currAcc != "y" && ppfAcc != "y"){
                    back();
                }
            }else if(choice == 4){
                if(currAcc == "y" && ppfAcc == "y"){
                    dashboard.logout();
                }else if(currAcc != "y" || ppfAcc != "y"){
                    back();
                }
            }else if(choice == 5){
                back();
            }
        }

        void viewSavingsAccount() {

        }

        void viewCurrentAccount() {

        }

        void viewPublicProvidedFundAccount() {

        }

        void back() {
            dashboard.customisedPage();
        }
};

class accountServices : public customisedDashboardPage {
    public:
        void currentPage() {
            int r=15, c=61, i, j, choice;

            system("cls");
            cout<<endl<<endl;
            for(i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    if(i<r && j==0)
                        cout<<"\t\t\t";

                    if(i==0 && j==1){
                        cout<<"Author: Divyaveer ";
                        j+=9;
                    }

                    if(i==1 && j==30){
                        cout<<"Services";
                        j+=4;
                    }

                    if(i==4 && j==4){
                        cout<<"Press:----";
                        j+=5;
                    }

                    if(i==5 && j==6){
                        cout<<"1. Check Avalable Balance ";
                        j+=13;
                    }

                    if(i==6 && j==6){
                        cout<<"2. Deposit Money";
                        j+=8;
                    }

                    if(i==7 && j==6){
                        cout<<"3. Withdraw Money ";
                        j+=9;
                    }

                    if(i==8 && j==6){
                        cout<<"4. Change Address ";
                        j+=9;
                    }

                    if(i==9 && j==6){
                        cout<<"5. Change Mobile No.";
                        j+=10;
                    }

                    if(i==10 && j==6){
                        cout<<"6. Last Logged on ";
                        j+=9;
                    }

                    if(i==11 && j==6){
                        cout<<"7. Dashboard";
                        j+=6;
                    }
                    
                    if(i==12 && j==6){
                        cout<<"8. Logout ";
                        j+=5;
                    }

                    if(i==r-1 && j==1){
                        cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad)";
                        j+=21;
                    }

                    if(i==2 && j<c)
                        cout<<"* ";
                    else if ((i==0 && j<c) || ((i<r-1 && i!=0) && (j==0 || j==c-1)) || (i==r-1 && j<c))
                        cout << "* ";
                    else
                        cout<<"  ";
                }
                cout<<endl;
            }
            cout<<endl<<endl;

            cout<<"\t\t\tEnter your Choice : ";
            cin>>choice;

            if(choice == 1)
                checkBalance();
            else if(choice == 2)
                deposit();
            else if(choice == 3)
                withdraw();
            else if(choice == 4)
                changeAddress();
            else if(choice == 5)
                changeMobileNo();
            else if(choice == 6)
                lastLoggedOn();
            else if(choice == 7)
                back();
            else if(choice == 8)
                logout();

            cout<<endl<<endl;
        }

    void checkBalance() {

    }

    void deposit() {

    }

    void withdraw() {

    }

    void changeAddress() {

    }

    void changeMobileNo() {

    }

    void lastLoggedOn() {

    }

    void back() {

    }

};

int main(){
    landingPage page;

    page.currentPage();

    return 0;
}