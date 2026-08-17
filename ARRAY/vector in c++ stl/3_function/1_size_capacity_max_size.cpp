#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    cout<<arr.size()<<endl;
    //Shows how many items are inside the container right now.
    //Goes up when you add items. Goes down when you delete items.
    //Always less than or equal to capacity.

    cout<<arr.capacity()<<endl;
    //Shows how many items the container can hold using current memory.
    //Available mainly on dynamic memory containers like std::vector and std::string.
    //When size hits capacity, the container gets a bigger block of memory and copies or moves data over.
    //Does not drop when you delete items unless you call shrink_to_fit().


    cout<<arr.max_size()<<endl;
    //Shows the absolute highest number of items the system or allocator allows.
    //A fixed theoretical limit based on architecture and memory limits of size_t.
    //Does not change no matter how many items you add or delete.
    //You will likely run out of RAM long before reaching this limit.


    return 0;
}