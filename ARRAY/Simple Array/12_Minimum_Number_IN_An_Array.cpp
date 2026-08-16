#include<iostream>
using namespace std;

int main(){
    int arr[]={10,25,7,89,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
          //or
    // we also use int min=INT_MAX for this need to include #include<iostream>;      
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum Element="<<min;
    return 0;
}