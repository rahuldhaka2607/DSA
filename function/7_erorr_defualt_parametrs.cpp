#include<iostream>
using namespace std;

int sum(int a=5,int b){//a,b are parameters
    int sum=a+b;
    return sum;
}

int main(){
    int s=sum(2);//2 are arguement
    cout<<"sum="<<s<<endl;
    return 0;
}