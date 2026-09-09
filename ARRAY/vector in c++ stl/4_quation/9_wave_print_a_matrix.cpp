#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v) {
    int m = v.size();
    int n = v[0].size();

    for (int startCol = 0; startCol < n; startCol++) {

        // Even column: Top to Bottom
        if ((startCol & 1) == 0) {
            for (int i = 0; i < m; i++) {
                cout << v[i][startCol] << " ";
            }
        }

        // Odd column: Bottom to Top
        else {
            for (int i = m - 1; i >= 0; i--) {
                cout << v[i][startCol] << " ";
            }
        }
    }
}

int main() {
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    wavePrintMatrix(v);

    return 0;
}