#include<iostream>
#include <vector>
using namespace std;

int main(){
//Traversing a vector means going through each element one by one, usually using a loop.
// We can use a for loop with an index (v[i]), a range-based for loop (for(int x: v)), or iterators.
// It takes linear time O(n) .

    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Range-based loop
  	for (char i : v)
        cout << i << " ";
 

// Use "for (char &x : v)" when you want to modify the elements of the vector.
// vector<char> v = {'a', 'c', 'f'};

// for (char& i : v) {
//     i = 'x';
// }

// for (char i : v) {
//     cout << i << " ";
// }
// Use "for (const char &x : v)" for read-only access, as it avoids copying and improves efficiency.
// vector<char> v = {'a', 'c', 'f', 'd', 'z'};

// for (const char& i : v) {
//     cout << i << " ";
// }





    return 0;
}