// 2. Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Header.h"
#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    setlocale(LC_ALL, "RU");
    Counter number;
    Counter number2;
    //������������ �������� �����
    std::cout << "�� ������ ������� ��������� �������� ��������?" << "\n" << "������� yes ��� no:" << std::endl;
    std::string yes_no;
    std::cin >> yes_no;
    if (yes_no == "yes") {
        std::cout << "������� ��������� �������� ��������:" << std::endl;
        int m;
        std::cin >> m;
        number = Counter(m); //�������� �������

       std::cout << "������� ������� ('+', '-', '=' ��� 'x'):";
        std::string command_2;
       std::cin >> command_2;
        while (command_2 != "x")
        {
            std::cout << "������� ������� ('+', '-', '=' ��� 'x'):";
            std::cin >> command_2;
            if (command_2 == "+")
            {
                number.pluse_1();
            }
            else if (command_2 == "-")
            {
                number.minus_1();
            }
            else if (command_2 == "=")
            {
                std::cout<<number.present_value()<<std::endl;
            }

            else if (command_2 == "x") {
                std::cout << "�� ��������!" << std::endl;
                break;
            }

        }
    }

    //////////////////////////////////////////////////////////////////////////////    

    if (yes_no == "no") {
        number2 = Counter();
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'):";
        std::string command_5;
        std::cin >> command_5;
        while (command_5 != "x") {
            std::cout << "������� ������� ('+', '-', '=' ��� 'x'):";
            std::cin >> command_5;
            if (command_5 == "+")
            {
                number.pluse_1();
            }
            else if (command_5 == "-")
            {
                number.minus_1();
            }
            else if (command_5 == "=")
            {
                std::cout << number.present_value() << std::endl;
            }
            else if (command_5 == "x") {
                std::cout << "�� ��������!" << std::endl;
                break;
            }

        }
    }


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
