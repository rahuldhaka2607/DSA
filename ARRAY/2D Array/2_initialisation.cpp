#include<iostream>
using namespace std;

int main(){
    // 1. Fully explicit initialization (Recommended)
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    // 2. Flattened sequential initialization (Fills row-by-row)
    int brr[3][3]={1,2,3,4,5,6,7,8,9};

    // 3. Omitting the row dimension (Compiler infers row size as 2)
    int crr[][3]={{1,2,3},{4,5,6}};

    // Zero and Partial InitializationIf you provide fewer initializers than the total capacity of the array, C++ automatically fills the remaining elements with 0

    // 1. Zero-fill the entire 2D array
    int matrix1[3][4] = {}; // or = {0};

    // 2. Partial initialization
    int matrix2[2][3] = {{1, 2}, {4}}; 
    // Result: Row 0 becomes {1, 2, 0}, Row 1 becomes {4, 0, 0}

    return 0;
}