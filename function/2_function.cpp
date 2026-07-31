#include<iostream>
using namespace std;

void sayHello(){
    cout<<"hello"<<endl;
}

void Assistance(){
    sayHello();
    cout<<"work done";
}

int main(){
    Assistance();
    return 0;
}