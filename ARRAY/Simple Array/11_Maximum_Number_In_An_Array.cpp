#include<iostream>
using namespace std;

int main(){
    int arr[]={10,25,7,89,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
          //or
    // we also use int max=INT_MIN for this need to include #include<iostream>;      
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum Element="<<max;
    return 0;
}