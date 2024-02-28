#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


// Phần tử đa số là phần tử xuất hiện nhiều hơn size/2
// dùng vét cạn hoặc sắp xếp

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Cách 1 vét cạn
        int halfSize = nums.size() / 2 ;
        for(int i=0; i<nums.size(); i++){
            int count = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[i]==nums[j]){
                    count+=1;
                }
            }
            if(count>halfSize){
                return nums[i];
            }
        }
        return -1;

        // Cách 2 sắp xếp
        int temp = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]>nums[j]){
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp; 
                }
            }
        }
        return nums[(int)halfSize];
    }
};

int main(){
    vector<int> a = {2,3,3};
    vector<int> b = {2,2,1,1,1,2,2};
    Solution sol;
    cout<<sol.majorityElement(a)<<endl;
    cout<<sol.majorityElement(b)<<endl;
    return 0;
}