#include <iostream>
#include <algorithm>
using namespace std;

void transpose(int arr[][3], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < c; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void printArray(int arr[][3], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Array:" << endl;
    printArray(arr, 3, 3);

    transpose(arr, 3, 3);

    cout << "Transpose:" << endl;
    printArray(arr, 3, 3);

    return 0;
}