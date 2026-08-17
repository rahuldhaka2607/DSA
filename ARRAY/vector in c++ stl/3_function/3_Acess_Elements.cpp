#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};
    
    // Accessing using operator[]
    cout << "Element at index 2 using []: " << v[2] << endl;
    
    // Accessing using at()
    cout << "Element at index 3 using at(): " << v.at(3) << endl;

    // out_of_range exception  in Accessing using operator[]
    cout << "Element at index 4 using []: " << v[4] << endl;
    // it shows grabbage value


    // out_of_range exception Accessing using at()
    cout << "Element at index 4 using at(): " << v.at(4) << endl;
    //it shows terminate called after throwing an instance of 'std::out_of_range'


    return 0;
}