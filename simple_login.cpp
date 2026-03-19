#include <iostream>
#include <string>
using namespace std;

int main() {
    string login = "admin";
    string password = "1234";

    if (login == "admin" && password == "1234") {
        cout << "Xush kelibsiz!";
    } else {
        cout << "Xato login yoki parol";
    }
}