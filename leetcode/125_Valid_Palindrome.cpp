#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        while(l<=r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            if(tolower(s[l])==tolower(s[r])){
                l++;
                r--;
            } else return false;
        }
        return true;
    }
};

