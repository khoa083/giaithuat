#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Dùng thuật toán Knuth-Morris-Pratt (KMP) O(n+m)
// Không nen dùng vét cạn qua từng ptu O(n^2)
class Solution {
public:
    int strStr(string haystack, string needle) {
        //Cách 1
        // Hàm tiền tố
        // int lps[needle.length()] = {};

        int sizeNeedle = (int)needle.length();
        vector<int> lps(sizeNeedle, 0);
        int pre = 0;
        for(int i = 1; i<needle.size(); i++){
            while(pre>0 && needle[i] != needle[pre]){
                pre = lps[pre-1];
            }
            if(needle[pre] == needle[i]){
                pre+=1;
                lps[i]=pre;
            }
        }

        int n = 0; //needle index
        for(int i = 0; i<haystack.length(); i++){
            while(n>0 && needle[n]!=haystack[i]){
                n=lps[n-1];
            }//Di chuyển n về phía sau nếu ko khớp
            if(needle[n]==haystack[i]){
                n+=1;
            }// tăng n nếu khớp
            if(n==needle.length()){
                return i - n +1;
            }
        }
        return -1;

        // Cách 2 vét cạn
    }
};

int main(){
    // vector<int> copy = test("aabaaab");
    // for(int i=0; i<copy.size(); i++){
    //     cout<< copy[i]<<" ";
    // }
    Solution sol;
    cout<<sol.strStr("sadbutsad","sad")<<endl;
    // cout<<sol.strStr("leetcode","leeto")<<endl;
    return 0;
}


// vector<int> test(string needle){
//     //Hàm tiền tố 
//     int n = (int)needle.length();
//     vector<int> lps(n, 0);
    
//     int pre = 0;
//     for(int i = 1; i<needle.size(); i++){
//         while(pre>0 && needle[i] != needle[pre]){
//             pre = lps[pre-1];
//         }
//         if(needle[pre] == needle[i]){
//             pre+=1;
//             lps[i]=pre;
//         }
//     }
//     return lps;
// }