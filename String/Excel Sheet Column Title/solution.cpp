class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";

        while (columnNumber > 0) {
            // Convert 1-26 to 0-25
            columnNumber--;

            // Get the current letter
            int rem = columnNumber % 26;
            ans += char('A' + rem);

            // Move to the next position
            columnNumber /= 26;
        }

        // We built the title from right to left
        reverse(ans.begin(), ans.end());

        return ans;
    }
};