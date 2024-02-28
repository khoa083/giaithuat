#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    vector<int> arr = {2,4,8,1,6};
    int temp = 0;
    for(int i=0; i<arr.size()/2; i++){
        temp = arr[i];
        arr[i] = arr[arr.size()-1-i];
        arr[arr.size()-1-i] = temp;
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}