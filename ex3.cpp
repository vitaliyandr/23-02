﻿#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "Positive number" << endl;
    }
    else if (number < 0) {
        cout << "Negative number" << endl;
    }
    else {
        cout << "The number is zero" << endl;
    }

    return 0;
}