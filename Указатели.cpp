#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    // 1. а) Создание и заполнение одномерного числового массива
    int n;
    std::cout << "Введите размер одномерного массива: ";
    std::cin >> n;

    // Динамическое выделение памяти
    int* arr = new int[n];

    // Заполнение массива значениями
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Вывод значений на экран
    std::cout << "Элементы одномерного массива:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    // 1. б) Создание и заполнение двумерного числового массива
    int rows, cols;
    std::cout << "Введите количество строк двумерного массива: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов двумерного массива: ";
    std::cin >> cols;

    // Динамическое выделение памяти
    int** arr2D = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr2D[i] = new int[cols];
    }

    // Заполнение двумерного массива значениями
    std::cout << "Введите элементы двумерного массива:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> arr2D[i][j];
        }
    }

    // Вывод значений на экран
    std::cout << "Элементы двумерного массива:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr2D[i][j] << " ";
        }
        std::cout << std::endl;
    }


    // 1. в) Создание и заполнение строки (массив символов)
    int strSize;
    std::cout << "Введите размер строки: ";
    std::cin >> strSize;

    // Динамическое выделение памяти
    char* str = new char[strSize + 1]; // +1 для '\0'

    // Заполнение строки
    std::cout << "Введите строку: ";
    std::cin >> str;

    // Вывод значений на экран
    std::cout << "Введенная строка: " << str << std::endl;


    // 2. Вычисление суммы элементов одномерного массива
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    std::cout << "Сумма элементов одномерного массива: " << sum << std::endl;


    // Освобождение динамической памяти
    delete[] arr;
    for (int i = 0; i < rows; i++) {
        delete[] arr2D[i];
    }
    delete[] arr2D;
    delete[] str;

    return 0;
}