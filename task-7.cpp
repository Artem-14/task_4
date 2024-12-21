#include <iostream>
#include <vector>
#include <locale>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    std::vector<int> array(n);
    std::cout << "Введите элементы массива:" << std::endl;
    for (int& elem : array) {
        std::cin >> elem;
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    double average = sum / n;

    int third = n / 3;

    if (average > 0) {
        std::sort(array.begin(), array.begin() + third);
    } else {
        std::sort(array.begin(), array.begin() + third);
    }

    std::reverse(array.begin() + third, array.end());

    std::cout << "Модифицированный массив:" << std::endl;
    for (const int& elem : array) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
