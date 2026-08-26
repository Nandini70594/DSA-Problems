class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int i = 0;
        int count = 0;
        int len = INT_MAX;

        for(int j = 0; j < s.length(); j++) {

            if(s[j] == '1') {
                count++;
            }

            while(count > k) {
                if(s[i] == '1') {
                    count--;
                }
                i++;
            }

            if(count == k) {

                // Remove unnecessary leading zeroes
                while(s[i] == '0') {
                    i++;
                }

                int currLen = j - i + 1;
                string curr = s.substr(i, currLen);

                if(currLen < len) {
                    len = currLen;
                    ans = curr;
                }
                else if(currLen == len && curr < ans) {
                    ans = curr;
                }
            }
        }

        return ans;
    }
};