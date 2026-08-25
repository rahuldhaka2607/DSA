#include <iostream>
using namespace std;

int findMin(int arr[][3], int rows, int cols) {
    int minValue = arr[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < minValue) {
                minValue = arr[i][j];
            }
        }
    }

    return minValue;
}

int main() {
    int arr[3][3] = {
        {10, 2, 30},
        {4, 50, 6},
        {7, 8, 1}
    };

    int rows = 3;
    int cols = 3;

    int min = findMin(arr, rows, cols);

    cout << "Minimum element = " << min << endl;

    return 0;
}