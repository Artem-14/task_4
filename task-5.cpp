#include <iostream>
#include <vector>
#include <locale>

int main() {
    setlocale(LC_ALL, "rus");

    std::vector<int> grades(10);
    double sum = 0;

    std::cout << "Введите 10 оценок студента:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> grades[i];
        sum += grades[i];
    }

    double average = sum / 10;
    bool scholarship = average >= 4.5;

    while (true) {
        int choice;
        std::cout << "\nМеню:\n";
        std::cout << "1. Вывести оценки\n";
        std::cout << "2. Пересдать экзамен\n";
        std::cout << "3. Проверить стипендию\n";
        std::cout << "4. Выход\n";
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Оценки студента: ";
            for (int i = 0; i < 10; ++i) {
                std::cout << grades[i] << " ";
            }
            std::cout << std::endl;
        }
        else if (choice == 2) {
            int index;
            std::cout << "Введите номер экзамена (1-10): ";
            std::cin >> index;
            if (index < 1 || index > 10) {
                std::cout << "Неверный номер экзамена!" << std::endl;
                continue;
            }
            int new_grade;
            std::cout << "Введите новую оценку: ";
            std::cin >> new_grade;
            sum -= grades[index - 1];
            grades[index - 1] = new_grade;
            sum += new_grade;
            average = sum / 10;
            scholarship = average >= 4.5;
        }
        else if (choice == 3) {
            if (scholarship) {
                std::cout << "Стипендия выходит!" << std::endl;
            } else {
                std::cout << "Стипендия не выходит." << std::endl;
            }
        }
        else if (choice == 4) {
            break;
        }
        else {
            std::cout << "Неверный выбор!" << std::endl;
        }
    }

    return 0;
}
