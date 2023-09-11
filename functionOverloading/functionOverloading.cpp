#include <iostream>
using namespace std;

// Матрица int
void matrix(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = i + j;
        }
    }
}

void printMatrix(int matrix[][3], int size) {

    cout << "Matrix int:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

}

void minMaxMatrix(int matrix[][3], int size) {
    int min = matrix[0][0];
    int max = matrix[0][0];

    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }

    cout << "Min on the main diagonal int matrix: " << min << endl;
    cout << "Max on the main diagonal int matrix: " << max << "\n\n";
}

// Матрица double
void matrix(double matrix[][3], int size) {

    float value = 0.3;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = value + i;

        }
    }

}


void printMatrix(double matrix[][3], int size) {

    cout << "Matrix int:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

}

void minMaxMatrix(double matrix[][3], int size) {
    double min = matrix[0][0];
    double max = matrix[0][0];

    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }

    cout << "Min on the main diagonal double matrix: " << min << endl;
    cout << "Max on the main diagonal double matrix: " << max << "\n\n";
}

// Матрица char
void matrix(char matrix[][3], int size) {

    char symbol = 'A';

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            matrix[i][j] = symbol;
            symbol++;
        }
    }
}

void minMaxMatrix(char matrix[][3], int size) {
    char min = matrix[0][0];
    char max = matrix[0][0];

    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }

    cout << "Min on the main diagonal char matrix: " << min << endl;
    cout << "Max on the main diagonal char matrix: " << max << "\n\n";
}


void printMatrix(char matrix[][3], int size) {

    cout << "Matrix int:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

}

int main() {
    const int SIZE = 3;

    int intMatrix[SIZE][SIZE];
    double doubleMatrix[SIZE][SIZE];
    char charMatrix[SIZE][SIZE];

    //инициализация матриц
    matrix(intMatrix, SIZE);
    matrix(doubleMatrix, SIZE);
    matrix(charMatrix, SIZE);

    //вывод матриц
    printMatrix(intMatrix, SIZE);
    printMatrix(doubleMatrix, SIZE);
    printMatrix(charMatrix, SIZE);

    //определение максимального и минимального
    minMaxMatrix(intMatrix, SIZE);
    minMaxMatrix(doubleMatrix, SIZE);
    minMaxMatrix(charMatrix, SIZE);

    return 0;
}

