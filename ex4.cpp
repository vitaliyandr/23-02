#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    if (number1 == number2) {
        cout << "The numbers are equal" << endl;
    }
    else {
        if (number1 < number2) {
            cout << "Numbers: " << number1 << ", " << number2 << endl;
        }
        else {
            cout << "Numbers: " << number2 << ", " << number1 << endl;
        }
    }

    return 0;
}