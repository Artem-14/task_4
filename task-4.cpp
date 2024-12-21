#include <iostream>
#include <vector>
#include <locale>

void insertionSort(std::vector<int>& array) {
    for (size_t i = 1; i < array.size(); ++i) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

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

    insertionSort(array);

    std::cout << "Отсортированный массив:" << std::endl;
    for (const int& elem : array) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
