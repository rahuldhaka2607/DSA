#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Initialize a new vector using an already existing vector of the same type
    vector<int> original = {1, 2, 3};
    vector<int> copy_vec(original); // Creates a copy of original

    return 0;
}