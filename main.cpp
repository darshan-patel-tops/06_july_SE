#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>
#include <sstream> 

using namespace std;

// Define a structure to represent a user account
struct UserAccount {
    string username;
    string password;
    string firstName;
    string lastName;
    string address;
    string mobile;
    string gender;
    int age;
};

// Function to register a new user
void registerUser(vector<UserAccount> &userAccounts) {
    UserAccount newUser;
    
    cout << "Enter your First Name: ";
    cin >> newUser.firstName;
    
    cout << "Enter your Last Name: ";
    cin >> newUser.lastName;
    
    cout << "Enter your Username: ";
    cin >> newUser.username;
    
    // Check if the username already exists
    for (const UserAccount &user : userAccounts) {
        if (user.username == newUser.username) {
            cout << "Username already exists. Please choose a different username." << endl;
            return;
        }
    }
    
    cout << "Enter your Password: ";
    cin >> newUser.password;
    
    cout << "Enter your Mobile Number: ";
    cin >> newUser.mobile;
    
    cout << "Enter your Address: ";
    cin.ignore(); // Clear the newline character from the buffer
    getline(cin, newUser.address);
    
    cout << "Enter your Gender: ";
    cin >> newUser.gender;
    
    cout << "Enter your Age: ";
    cin >> newUser.age;
    
    // Add the new user to the vector of user accounts
    userAccounts.push_back(newUser);
    
    // Save the user data to a file (e.g., "user_accounts.txt")
    ofstream outFile("user_accounts.txt", ios::app); // Open the file in append mode
    if (outFile.is_open()) {
        outFile << newUser.username << "," << newUser.password << "\n";
        outFile.close();
    } else {
        cerr << "Error: Unable to save user data." << endl;
    }
    
    cout << "Registration successful!" << endl;
}

// Function to log in a user
bool loginUser(const vector<UserAccount> &userAccounts, string &loggedInUsername) {
    string username, password;
    
    cout << "Enter your Username: ";
    cin >> username;
    
    cout << "Enter your Password: ";
    cin >> password;
    
    // Check if the provided username and password match any user account
    for (const UserAccount &user : userAccounts) {
        if (user.username == username && user.password == password) {
            loggedInUsername = username;
            return true; // Login successful
        }
    }
    
    cout << "Login failed. Please check your username and password." << endl;
    return false; // Login failed
}

// Main menu for logged-in users
void mainMenu(const string &loggedInUsername) {
    cout << "Welcome, " << loggedInUsername << "!" << endl;
    
    // Implement the main menu options here
    
    // Example options:
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Logout" << endl;
    
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            // Implement check balance functionality
            break;
        case 2:
            // Implement deposit money functionality
            break;
        case 3:
            // Implement withdraw money functionality
            break;
        case 4:
            cout << "Logging out..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

int main() {
    vector<UserAccount> userAccounts;
    string loggedInUsername;
    
    // Load user account data from a file (e.g., "user_accounts.txt")
    ifstream inFile("user_accounts.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            stringstream ss(line);
            UserAccount user;
            getline(ss, user.username, ',');
            getline(ss, user.password);
            userAccounts.push_back(user);
        }
        inFile.close();
    } else {
        cerr << "Error: Unable to load user data." << endl;
    }
    
    int choice;
    
    do {
        cout << "Online Banking System" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                registerUser(userAccounts);
                break;
            case 2:
                if (loginUser(userAccounts, loggedInUsername)) {
                    mainMenu(loggedInUsername);
                }
                break;
            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);
    
    return 0;
}
