#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        //Cach 1
        // int number[7] = {1,5,10,50,100,500,1000};
        // char roman[7] = {'I','V','X','L','C','D','M'};
        // int sum[s.length()];

        // for(int i = 0; i<s.length(); i++){
        //     for(int j = 0; j < 7;j++){
        //         if(s[i]==roman[j]){
        //             sum[i]=number[j];
        //         }
        //     }
        // }
        // int temp = 0;
        // for(int i = 0; i<s.length(); i++){
        //     if (i+1 < s.length() && sum[i]<sum[i+1]){
        //         temp -= sum[i];
        //     } else {
        //         temp += sum[i]; 
        //     }
        // }
        // return temp;

        //Cach 2
        map<char,int> roman = {};
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int sum = 0;
        for(int i = 0; i < s.length(); i++){
            if(i+1<s.length() && roman[s[i]]<roman[s[i+1]]){
                sum -= roman[s[i]];
            } else {
                sum += roman[s[i]];
            }
        }
        
        return sum;
    }
};

int main(){
    Solution sol;
    int a = sol.romanToInt("LVIII");
    cout<<a;
}
// @lc code=end

