#include <iostream>

using namespace std;

const int SIZE = 4;

void displayMatrix(int matrix[][SIZE]) {
    cout << "Matrix:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matrix[SIZE][SIZE];

    cout << "Enter elements of the 4x4 square matrix:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    displayMatrix(matrix);

    int totalSum = 0;
    int rowSums[SIZE] = {0};
    int colSums[SIZE] = {0};
    int diagonalSum1 = 0, diagonalSum2 = 0;

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            totalSum += matrix[i][j];
            rowSums[i] += matrix[i][j];
            colSums[j] += matrix[i][j];
            if (i == j) {
                diagonalSum1 += matrix[i][j];
            }
            if (i + j == SIZE - 1) {
                diagonalSum2 += matrix[i][j];
            }
        }
    }

    cout << "\nTotal Sum: " << totalSum << endl;
    cout << "Sum of elements in each row:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Row " << i + 1 << ": " << rowSums[i] << endl;
    }
    cout << "Sum of elements in each column:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Column " << i + 1 << ": " << colSums[i] << endl;
    }
    cout << "Sum of elements in the main diagonal: " << diagonalSum1 << endl;
    cout << "Sum of elements in the secondary diagonal: " << diagonalSum2 << endl;

    return 0;
}
