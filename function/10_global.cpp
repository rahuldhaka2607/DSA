#include<iostream>
using namespace std;

int num=25;

void sum(int a,int b){
    if(a>=1){
        cout<<num;
    }
    int s=a+b;
    cout<<s;
}

int main(){
    sum(5,4);
    cout<<num;
    
    return 0;
}