#include<iostream>
using namespace std;

void sayHello(){
    cout<<"hello";
}

void Assistance(){
    sayHello();
    cout<<"work done";
}

int main(){
    Assistance();
    return 0;
}