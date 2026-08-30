#include <iostream>
#include <cstdlib>
using namespace std;

void findMissing(int a[], int n)
{
    // // Mark numbers that are present
    // for (int i = 0; i < n; i++)
    // {
    //     int index = abs(a[i]);

    //     if (a[index - 1] > 0)
    //     {
    //         a[index - 1] *= -1;
    //     }
    // }

    // // Find missing numbers
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] > 0)
    //     {
    //         cout << i + 1 << " ";
    //     }
    // }


    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
   for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            cout << "Missing number = " << i + 1;
            return;
        }
    }
}

int main()
{
    int a[] = {1, 3, 5, 3, 4};

    int n = sizeof(a) / sizeof(a[0]);

    findMissing(a, n);

    return 0;
}