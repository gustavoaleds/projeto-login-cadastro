#include <iostream>

using namespace std;

 struct{
    char username[20];  //Vetor referente ao username da struct USER;
    char password[20];  //Vetor referente ao password da struct USER;
} user;char u[1];

int main()
{
    cout << "LOGIN\n\n";
    cout << "Insert your username and password to continue: \n\n";

    char username[20];
    char password[20];

    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
}
