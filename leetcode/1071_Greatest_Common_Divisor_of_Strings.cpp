#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int l1 = str1.length();
        int l2 = str2.length();
        while(l1!=l2){
            if(l1>l2){
                l1-=l2;
            } else l2-=l1;
        }
        
        string gcd ="";
        for(int i=0; i<l1-1; i++){
            gcd+=str1[i];
        }

        if(str1+str2!=str2+str1){
            return " ";
        }
        return gcd;
    }
};

int main(){
    Solution sol;
    cout<<sol.gcdOfStrings("LEET","CODE");
    return 0;
}