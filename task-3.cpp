#include <iostream>
#include <vector>
#include <ctime>
#include <locale>

int main() {
    setlocale(LC_ALL, "rus");
    srand(static_cast<unsigned int>(time(0)));

    int array1[5][10], array2[5][5];

    // Заполнение первого массива
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            array1[i][j] = rand() % 51;
        }
    }

    // Заполнение второго массива
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            array2[i][j] = array1[i][j * 2] + array1[i][j * 2 + 1];
        }
    }

    // Вывод массивов
    std::cout << "Первый массив:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << array1[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "\nВторой массив:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << array2[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
