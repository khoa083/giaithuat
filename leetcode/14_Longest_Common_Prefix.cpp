#include<iostream>
#include<string>
#include<vector>
using namespace std;
// Dùng phương pháp quét dọc kiểm tra mỗi kí tự có giống
// nhau không
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Đầu tiên lấy ra từ bất kì strs[i]
        // Rồi xem kí tự đầu tiên của mỗi từ có khớp với nhau không
        if(strs.size() == 0) {
            return "";
        }
        
        string base = strs[0];
        for(int i = 0; i<base.length(); i++){
            for(string word: strs){
                if(base[i] != word[i]){
                    return base.substr(0,i);
                }
            }
        }
        return base;
    }
};

int main(){
    vector<string> a = {"flower","flow","flight"};
    Solution sol;
    cout<<sol.longestCommonPrefix(a);
    return 0;
}