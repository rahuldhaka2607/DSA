#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,3,5,7,9};
    int sizeofa=5;
    int brr[]={2,4,6,8};
    int sizeofb=4;

    vector<int> ans;


    //insert elements of arr
    for(int i=0;i<sizeofa;i++){
        ans.push_back(arr[i]);
    }

    //insert elements of brr
    for(int i=0;i<sizeofb;i++){
        ans.push_back(brr[i]);
    }
    
    cout<<"printing array:";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}