#include<iostream>
using namespace std;

void inc(int arr[],int sizeofarr){

    arr[0]=arr[0]+10;

    for(int i=0;i<sizeofarr;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main(){
    int sizeofarr=2;
    int arr[]={5,6};
    inc(arr, sizeofarr);
    for(int i=0;i<sizeofarr;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}