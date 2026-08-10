#include<iostream>
using namespace std;

int inc(int a){
    a++;
    cout<<a<<endl;
}

int main(){
    int a=5;
    inc(a);
    cout<<a;
    return 0;
}