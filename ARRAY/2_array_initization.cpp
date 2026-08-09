#include<iostream>
using namespace std;

int main(){
    //array declaration
    // The size of the array can be skipped if the size should be same as the number of values.
    int arr[]={2,3,4,6,7};
    // Initialization means assigning initial values to array elements. We can initialize the array with values enclosed in curly braces '{}' are assigned to the array.
    int brr[5]={2,3,4,6,7};
    //if size of array is grater than  values in curly braces than it assigend 0 to next values
    int crr[10]={2,3,4,6,7};
    //Moreover, all the elements can be easily initialized to 0 as shown below
    int drr[5]={0};
    //error
    //int err[4]={2,3,4,6,7};
    cout<<"Array initialised successfully"<<endl;
    return 0;
}