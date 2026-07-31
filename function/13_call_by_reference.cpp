#include <iostream>
using namespace std;

// Function receives a reference
void increment(int& num)
{
    num++;
    cout << "Inside function: " << num << endl;
}

int main()
{
    int number = 5;

    increment(number);

    cout << "Outside function: " << number << endl;

    return 0;
}