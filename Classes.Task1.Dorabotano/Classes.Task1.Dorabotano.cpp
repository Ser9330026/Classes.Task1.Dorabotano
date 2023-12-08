#include <string>
#include <cstring>
#include <iostream>

class Calculator {
private:
    double num1;
    double num2;
public:
    Calculator() : num1(1), num2(1) {};
    Calculator(double num1, double num2) : num1(num1), num2(num2) {};
    //~Calculator() {};

    double add(double num1, double num2) {
        return num1 + num2;
    }

    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    double subtract_1_2(double num1, double num2) {
        return num2 - num1;
    }

    double subtract_2_1(double num1, double num2) {
        return num1 - num2;
    }

    double divide_1_2(double num1, double num2) {
        if (num2 == 0) {
        std::cout << "ОШИБКА!!! На ноль делить нельзя!!!" << std::endl;
        }
        return num1 / num2;
        
    }

    double divide_2_1(double num1, double num2) {
       if (num1 == 0) {
            std::cout << "ОШИБКА!!! На ноль делить нельзя!!!" << std::endl;
        } 
       return num2 / num1;
        
    }

    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }

    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    setlocale(LC_ALL, "rus");

    std::cout << "Задание №1" << std::endl;
    Calculator calc;
    double num1, num2;
    while (true) {
        std::cout << "Введите num1:";
        std::cin >> num1;
        std::cout << "Введите num2:";
        std::cin >> num2;

        if (calc.set_num1(num1) && calc.set_num2(num2)) {

            std::cout << "num1 + num2 = " << calc.add(num1, num2) << std::endl;
            std::cout << "num1 * num2 = " << calc.multiply(num1, num2) << std::endl;
            std::cout << "num2 - num1 = " << calc.subtract_1_2(num1, num2) << std::endl;
            std::cout << "num1 - num2 = " << calc.subtract_2_1(num1, num2) << std::endl;
            std::cout << "num1 / num2 = " << calc.divide_1_2(num1, num2) << std::endl;
            std::cout << "num2 / num1 = " << calc.divide_2_1(num1, num2) << std::endl;
            break;
        }
        else {
            std::cout << "Неверный ввод!" << std::endl;
        }
    }

    return 0;
}