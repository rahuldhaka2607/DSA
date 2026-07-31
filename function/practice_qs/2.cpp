#include<iostream>
using namespace std;

void oddeven(int n){
    if(n%2==0){
        cout<<"n is even";
    }
    else{
        cout<<"n is odd";
    }
}

int main(){

    int n;
    cout<<"enter n:";
    cin>>n;
    oddeven(n);
    
    return 0;
}