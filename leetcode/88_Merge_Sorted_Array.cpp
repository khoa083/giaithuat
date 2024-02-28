#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //Cach 1
    for(int i = 0; i<n; i++){
        nums1[m+i] = nums2[i];
    }

    int temp = 0;
    for(int i = 0; i < m+n ; i++) {
        for(int j= i+1; j<m+n; j++){
            if (nums1[i]>nums1[j]){
                temp = nums1[j];
                nums1[j]=nums1[i];
                nums1[i]=temp;
            }
        }
    }
    //Cach 2
    
}

int main() {
    vector<int> a = {1,2,3,0,0,0};
    vector<int> b = {2,5,6};
    merge(a,3,b,3);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}