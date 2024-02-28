#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[count]= nums[i];
                count++;
            }
        }
        return count;
    }
};

// 0	1	2	3	i
// 3	2	2	3	
// i	i+1	i+2	i+3	


int main(){
    return 0;
}