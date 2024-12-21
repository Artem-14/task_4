#include <iostream>
#include <vector>
#include <locale>

int main() {
    setlocale(LC_ALL, "rus");

    int rows, cols;
    std::cout << "Введите количество строк и столбцов массива: ";
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));
    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> array[i][j];
        }
    }

    std::vector<int> row_sums(rows, 0), col_sums(cols, 0);
    int total_sum = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            row_sums[i] += array[i][j];
            col_sums[j] += array[i][j];
            total_sum += array[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << "\t";
        }
        std::cout << "| " << row_sums[i] << std::endl;
    }

    std::cout << "--------------------" << std::endl;
    for (int j = 0; j < cols; ++j) {
        std::cout << col_sums[j] << "\t";
    }
    std::cout << "| " << total_sum << std::endl;

    return 0;
}
