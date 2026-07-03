class Solution {
public:

    // Function to expand around center
    void expand(string &s, int left, int right,
                int &start, int &maxLen) {

        int n = s.length();

        // Expand while characters match
        while(left >= 0 && right < n && s[left] == s[right]) {

            // Current palindrome length
            int len = right - left + 1;

            // Update longest palindrome if needed
            if(len > maxLen) {
                maxLen = len;
                start = left;
            }

            // Expand outward
            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {

        int n = s.length();

        // Stores starting index of longest palindrome
        int start = 0;

        // Stores maximum palindrome length
        int maxLen = 1;

        // Try every index as center
        for(int i = 0; i < n; i++) {

            // Odd length palindrome
            // Example: "aba"
            expand(s, i, i, start, maxLen);

            // Even length palindrome
            // Example: "abba"
            expand(s, i, i + 1, start, maxLen);
        }

        // Return longest palindromic substring
        return s.substr(start, maxLen);
    }
};