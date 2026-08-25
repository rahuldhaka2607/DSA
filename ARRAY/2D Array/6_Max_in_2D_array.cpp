#include <iostream>
using namespace std;

int getMax(int arr[][3], int rows, int cols) {
    int maxi = arr[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxi) {
                maxi = arr[i][j];
            }
        }
    }

    return maxi;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {1, 3, 7},
        {4, 6, 8}
    };

    int rows = 3;
    int cols = 3;

    cout << "Maximum element = " << getMax(arr, rows, cols);

    return 0;
}