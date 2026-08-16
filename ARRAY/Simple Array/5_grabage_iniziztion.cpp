#include<iostream>
using namespace std;

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int b[5]={1};
    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    int c[5]={0};
    for(int i=0;i<5;i++){
        cout<<c[i]<<" ";
    }
    
    return 0;
}