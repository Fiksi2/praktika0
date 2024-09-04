#include <iostream>

void printWelcomeMessage() {
    setlocale(LC_ALL, "Rus");
    std::cout << "WELOCME!!\n";
    std::cout << "Вы можете выполнить следующие операции:\n";
    std::cout << "1. Сложение\n";
    std::cout << "2. Вычитание\n";
    std::cout << "3. Умножение\n";
    std::cout << "4. Деление\n";
    std::cout << "Введите номер операции, которую хотите выполнить:\n";
}

int main() {
    printWelcomeMessage();

    int choice;
    std::cin >> choice;

    double num1, num2;
    std::cout << "Введите два числа:\n";
    std::cin >> num1 >> num2;

    double result;
    switch (choice) {
    case 1:
        result = num1 + num2;
        std::cout << "Результат сложения: " << result << "\n";
        break;
    case 2:
        result = num1 - num2;
        std::cout << "Результат вычитания: " << result << "\n";
        break;
    case 3:
        result = num1 * num2;
        std::cout << "Результат умножения: " << result << "\n";
        break;
    case 4:
        if (num2 != 0) {
            result = num1 / num2;
            std::cout << "Результат деления: " << result << "\n";
        }
        else {
            std::cout << "Ошибка: деление на ноль!\n";
        }
        break;
    default:
        std::cout << "Неверный выбор операции.\n";
        break;
    }

    return 0;
}