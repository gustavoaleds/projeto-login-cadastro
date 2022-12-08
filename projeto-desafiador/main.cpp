#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    int option;

    cout << "Select a option: \n1. Register \n2. Login\nEnter the option number: ";
    cin >> option;
    if(option == 1){

        string username, password;

        cout << "Choose a username: "; cin >> username;
        cout << "Choose a password: "; cin >> password;

        ofstream file;
        file.open("username.txt");
        file << username << endl << password;
        file.close();

        main();
    }
}
