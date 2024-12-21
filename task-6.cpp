#include <iostream>
#include <vector>
#include <locale>

void quickSort(std::vector<int>& array, int low, int high) {
    if (low < high) {
        int pivot = array[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; ++j) {
            if (array[j] <= pivot) {
                ++i;
                std::swap(array[i], array[j]);
            }
        }
        std::swap(array[i + 1], array[high]);
        int pivotIndex = i + 1;
        quickSort(array, low, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, high);
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

    quickSort(array, 0, n - 1);

    std::cout << "Отсортированный массив:" << std::endl;
    for (const int& elem : array) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
