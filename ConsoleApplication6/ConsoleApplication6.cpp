// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>
#include <windows.h> // ������� ��� ��������� ��� ������� SetConsoleCP �� SetConsoleOutputCPinclude <iomanip>
#include <iomanip>


int main() {
    // ������������ ������ ������� ��� ������ �� 1251 (���������)
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;
    double A = 10.0; // ����������, �� A �� ���-������ ��������
    double B;

    std::cout << "������ �������� x: ";
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

    // ����� 2: ������������ � ����� ����
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