#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        for(int i=0; i<flowerbed.size()-1; i++){
            bool left;
            bool right;
            if(flowerbed[i-1]==0 or i==0) left=true; else left=false;
            if(flowerbed[i+1]==0 or i==flowerbed.size()-1) right=true; else right=false;
            if(left and right){
                flowerbed[i]=1;
                count++;
                if(count==n) return true;
            }
        }
        return false;
    }
};



