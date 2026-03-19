#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 7, c = 5;

    if (a >= b && a >= c)
        cout << "a katta";
    else if (b >= a && b >= c)
        cout << "b katta";
    else
        cout << "c katta";
}