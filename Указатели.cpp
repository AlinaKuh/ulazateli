#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    // 1. �) �������� � ���������� ����������� ��������� �������
    int n;
    std::cout << "������� ������ ����������� �������: ";
    std::cin >> n;

    // ������������ ��������� ������
    int* arr = new int[n];

    // ���������� ������� ����������
    std::cout << "������� �������� �������:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // ����� �������� �� �����
    std::cout << "�������� ����������� �������:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    // 1. �) �������� � ���������� ���������� ��������� �������
    int rows, cols;
    std::cout << "������� ���������� ����� ���������� �������: ";
    std::cin >> rows;
    std::cout << "������� ���������� �������� ���������� �������: ";
    std::cin >> cols;

    // ������������ ��������� ������
    int** arr2D = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr2D[i] = new int[cols];
    }

    // ���������� ���������� ������� ����������
    std::cout << "������� �������� ���������� �������:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> arr2D[i][j];
        }
    }

    // ����� �������� �� �����
    std::cout << "�������� ���������� �������:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr2D[i][j] << " ";
        }
        std::cout << std::endl;
    }


    // 1. �) �������� � ���������� ������ (������ ��������)
    int strSize;
    std::cout << "������� ������ ������: ";
    std::cin >> strSize;

    // ������������ ��������� ������
    char* str = new char[strSize + 1]; // +1 ��� '\0'

    // ���������� ������
    std::cout << "������� ������: ";
    std::cin >> str;

    // ����� �������� �� �����
    std::cout << "��������� ������: " << str << std::endl;


    // 2. ���������� ����� ��������� ����������� �������
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    std::cout << "����� ��������� ����������� �������: " << sum << std::endl;


    // ������������ ������������ ������
    delete[] arr;
    for (int i = 0; i < rows; i++) {
        delete[] arr2D[i];
    }
    delete[] arr2D;
    delete[] str;

    return 0;
}