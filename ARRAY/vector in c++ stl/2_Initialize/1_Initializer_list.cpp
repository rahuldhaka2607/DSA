#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Directly specify the elements inside curly braces.
    std::vector<int> v = {10, 20, 30, 40};
    // Or simply:
    std::vector<int> v{10, 20, 30, 40};

    return 0;
}