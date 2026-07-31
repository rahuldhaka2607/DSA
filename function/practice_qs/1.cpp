#include<iostream>
using namespace std;

int product(int a,int b){//a,b are parameters
    int pro=a*b;
    return pro;
}

int main(){
    int p=product(5,2);//5,2 are arguement
    cout<<"product="<<p<<endl;
    return 0;
}