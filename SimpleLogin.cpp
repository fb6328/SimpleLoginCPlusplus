#include <iostream>
#include <string>

using namespace std;

int main() {
    // Hard-coded username and password
    const string USERNAME = "admin";
    const string PASSWORD = "password123";

    string inputUsername, inputPassword;
    bool isLoggedIn = false;

    while (!isLoggedIn) {
        // Prompt the user for username and password
        cout << "Enter username: ";
        cin >> inputUsername;
        cout << "Enter password: ";
        cin >> inputPassword;

        // Check if the credentials match
        if (inputUsername == USERNAME && inputPassword == PASSWORD) {
            isLoggedIn = true;
            cout << "Login successful. Welcome to my Simple App." << endl;
        } else {
            cout << "Invalid username or password. Please try again." << endl;
        }
    }

    // Main menu loop
    while (isLoggedIn) {
        int choice;
        cout << "Select an action to perform:" << endl;
        cout << "1. Go to About Us Page" << endl;
        cout << "2. Go to Services Page" << endl;
        cout << "3. Go to Full Profile Page" << endl;
        cout << "4. Logout" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                // About Us Page
                cout << "\n--- About Us Page ---\n";
                cout << "I am a C++ enthusiast who enjoys solving complex problems using this versatile language. "
                          << "The thing I enjoy most about C++ is its ability to give me full control over system resources while "
                          << "providing powerful abstractions.\n" << std::endl;
                break;

            case 2:
                // Services Page
                cout << "\n--- Services Page ---\n";
                cout << "I can offer services such as software development, debugging, and performance optimization using C++. "
                          << "I also provide tutoring sessions for those interested in learning C++ programming.\n" << endl;
                break;

            case 3:
                // Full Profile Page
                cout << "\n--- Full Profile Page ---\n";
                cout << "Full Name: Fred Barasa\n";
                cout << "Year of Birth: 1995\n";
                cout << "Country: Kenya\n";
                cout << "Citizenship: Kenyan\n";
                cout << "City: Nairobi\n";
                cout << "University: XYZ University\n";
                cout << "Course: Computer Science\n";
                cout << "Unit Name: Advanced Programming\n";
                cout << "Hobbies: Coding, Reading, Hiking, Playing Chess\n" << endl;
                break;

            case 4:
                // Logout
                cout << "Logout successful." << endl;
                isLoggedIn = false; // Break the loop to ask for login again
                break;

            default:
                cout << "Invalid choice. Please select an option between 1 and 4." << endl;
        }
    }

    // Ask the user to login again after logging out
    cout << "Please login again to continue." << endl;

    return 0;
}
