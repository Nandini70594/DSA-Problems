class Solution {
public:
    bool isPalindromic(string s) {
        string binStr = "";
        for(char c : s){
            int asciiVal = (int)c;
            for(int i=7; i>=0; i--){
                if((asciiVal >> i) & 1){
                    binStr += '1';
                } else {
                    binStr += '0';
                }
            }
        }
        int left=0;
        int right = binStr.length()-1;
        while(left<right){
            if(binStr[left] != binStr[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};