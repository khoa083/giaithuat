#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        // Dùng 2 con trỏ 1 chạy từ đầu->cuối 2 chạy 
        // ngược lại

        // là một kỹ thuật cực kỳ phổ biến được sử dụng để giải các 
        // bài toán liên quan đến mảng và chuỗi. Kỹ thuật đề cập đến 
        // việc sử dụng hai biến số nguyên mà cả hai đều di chuyển 
        // dọc theo một đối tượng lặp. 
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(!findChar(s[l])){
                l++;
            }
            else if (!findChar(s[r])){
                r--;
            }
            else {
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;r--;
            }
        }
        return s;
    }

    bool findChar(char x){
        return x=='a' ||  x=='e' ||  x=='i' ||  x=='o' || x=='u' || x=='A' ||  x=='E' ||  x=='I' ||  x=='O' || x=='U';
    }
};

int main(){
    Solution sol;
    cout<<sol.reverseVowels("Ui");
    return 0;
}