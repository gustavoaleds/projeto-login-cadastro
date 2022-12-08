#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

bool LogSucess(){

    string username, password, user, pass;

    cout << "Enter your username: "; cin >> username;
    cout << "Enter your password: "; cin >> password;

    ifstream read("username.txt");
    getline(read, user);
    getline(read, pass);

    if(user == username && pass == password){
        return true;
    }
    else{
        return false;
    }
}

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
    else if (option == 2) {
        bool situation = LogSucess();
        if (!situation)
        {
            cout << "Incorret password or username. Try Again." << endl;
            system("PAUSE");
            return 0;
        }
        else {

            cout << "Login Sucessfull!" << endl;
            system("PAUSE");
            return 1;
        }

    }
}
