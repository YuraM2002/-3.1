// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>
#include <windows.h> // Додайте цей заголовок для функцій SetConsoleCP та SetConsoleOutputCPinclude <iomanip>
#include <iomanip>


int main() {
    // Налаштування кодової сторінки для консолі на 1251 (українська)
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;
    double A = 10.0; // Припустимо, що A має яке-небудь значення
    double B;

    std::cout << "Введіть значення x: ";
    std::cin >> x;

    if (x <= (-5)) {
        B = exp(x / fabs(1 - x));
    }
    else if (x > (-5) && x <= 3) {
        B = 3.2 + log10(1.8 * x * x);
    }
    else {
        B = fabs(x) * sqrt(x);
    }

    double y = A - B;

    std::cout << "1) y = " << y << std::endl;

    // Спосіб 2: розгалуження в повній формі
    if (x <= (-5)) {
        B = exp(x / fabs(1 - x));
    }
    else if (x > 3) {
        B = fabs(x) * sqrt(x);
    }
    else {
        B = 3.2 + log10(1.8 * x * x);
    }

    y = A - B;

    std::cout << "2) y = " << y << std::endl;

    return 0;
}