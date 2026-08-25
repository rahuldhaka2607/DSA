#include <iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == key) {
                return true;
            }
        }
    }

    // Value is not present
    return false;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;
    int key;

    cout << "Enter key to search: ";
    cin >> key;

    if (findKey(arr, rows, cols, key)) {
        cout << "Key is present." << endl;
    } else {
        cout << "Key is not present." << endl;
    }

    return 0;
}