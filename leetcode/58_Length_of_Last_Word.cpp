#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int sizeStr = s.size()-1;
        int count = 0;

        for(int i = sizeStr; i>=0; i--){
            if(s[i] != ' '){
                count++;
            } else if (count>0) return count;
        }
        return count;
    }
};

int main(){
    
    return 0;
}