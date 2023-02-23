#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < b) {
        cout << a << " is smaller." << endl;
    }
    else {
        cout << b << " is smaller." << endl;
    }
    return 0;
}