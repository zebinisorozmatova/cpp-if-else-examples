#include <iostream>
using namespace std;

int main() {
    int ball = 85;

    if (ball >= 90) {
        cout << "A";
    } else if (ball >= 80) {
        cout << "B";
    } else if (ball >= 70) {
        cout << "C";
    } else {
        cout << "F";
    }
}