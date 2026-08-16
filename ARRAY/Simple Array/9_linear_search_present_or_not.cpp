#include<iostream>
using namespace std;

bool find(int arr[],int size,int Key){
    for(int i=0;i<size;i++){
        if(arr[i]==Key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[]={1,3,5,7,8};
    int size=5;
    cout<<"Enter Key to find:"<<endl;
    int Key;
    cin>>Key;
    if(find(arr,size,Key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}