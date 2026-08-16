#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int arr[10];

    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
// Your code needs #include <cstring> for memset().
// memset is commonly used for setting an integer array to 0:
// because all bytes being 0 gives integer 0.
//if you can use 0 and -1 then it will show does not make every element equal to 2. It makes every byte equal to 2, producing a much larger integer.

/*“memset() works byte by byte, not integer by integer. When we use memset(arr, 5, sizeof(arr)), every byte is filled with 5, so an integer gets 0x05050505, not 5. But 0 works because all zero bytes represent integer 0, and -1 works because all 0xFF bytes represent -1 in two’s complement representation.”

                or


                “Because memset() initializes memory byte by byte. Therefore, 0 and -1 work for integers, but values like 5 fill every byte with 5, producing a different integer value.”*/