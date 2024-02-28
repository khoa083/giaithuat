#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0];
        for(int i=0; i<candies.size(); i++){
            if(candies[i]>max){
                max = candies[i];
            }
        }
        vector<bool> saveResult(candies.size(),false);
        bool check;
        for(int i=0; i<candies.size(); i++){
            bool check = candies[i]+extraCandies >= max;
            saveResult[i] = check;
        }
        return saveResult;
    }
};

int main(){
    Solution sol;
    vector<int> a = {2,3,5,1,3};
    for (int i=0; i< sol.kidsWithCandies(a,3).size(); i++){
        if(sol.kidsWithCandies(a,3)[i]){
            cout<<"true ";
        } else cout<<"false ";
    }
    return 0;
}