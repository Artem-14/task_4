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

    int sum = 0, min_val = array[0][0], max_val = array[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += array[i][j];
            if (array[i][j] < min_val) min_val = array[i][j];
            if (array[i][j] > max_val) max_val = array[i][j];
        }
    }

    double average = static_cast<double>(sum) / (rows * cols);
    std::cout << "Сумма всех элементов: " << sum << std::endl;
    std::cout << "Среднее арифметическое: " << average << std::endl;
    std::cout << "Минимальный элемент: " << min_val << std::endl;
    std::cout << "Максимальный элемент: " << max_val << std::endl;

    return 0;
}
