A vector represents a dynamic sized array in the Standard Template Library(STL) that automatically grows when elements are added beyond current capacity.

A programmer does not have to worry about maintaining the capacity and allocating extra space initially.
Certain insertions and removals can become slightly costly in terms of time as it internally resizes itself beyond certain predefined limits. If time taken for these operations is super critical, then use of plain arrays in C++ should be preferred.
Vectors support bound checking by using v.at(i) for accessing an element at index i in a vector v.