#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Create a vector containing a specific number of elements, all initialized to the same value:
    // Syntax: std::vector<Type> name(size, default_value);
    vector<int> vec(5, 10); // Creates: {10, 10, 10, 10, 10}

                        //or
    //If you omit the second parameter, elements are value-initialized (set to 0 for basic types like numbers)
    vector<int> vec2(5); // Creates: {0, 0, 0, 0, 0}
                    

    return 0;
}