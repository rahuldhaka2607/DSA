#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> v={'a','f','d'};

    //Inserting 'z' at the back
    //push_back(value): Inserts element at the end of the vector efficiently. Takes constant time O(1) on average, so it's very fast.
    v.push_back('z');

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //Inserting 'c' at index 1
    //insert(position, value): Inserts element at any position (beginning, middle, or end). Takes linear time O(n), as it shifts elements to make space.
    v.insert(v.begin()+1,'c');

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}