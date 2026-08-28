#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{1, -2, 3, -4, -5, 6};

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {

        if (arr[start] < 0) {
            // Already negative, so keep it on the left
            start++;
        }
        else if (arr[end] >= 0) {
            // Already positive, keep it on the right
            end--;
        }
        else {
            // start = positive, end = negative
            swap(arr[start], arr[end]);
        }
    }

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}