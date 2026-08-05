class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";

        unordered_map<char, int> row;

        for (char c : r1) row[c] = 1;
        for (char c : r2) row[c] = 2;
        for (char c : r3) row[c] = 3;

        vector<string> ans;

        for (string word : words) {
            int r = row[tolower(word[0])];
            bool ok = true;
            for (char ch : word) {
                if (row[tolower(ch)] != r) {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ans.push_back(word);
        }
        return ans;
    }
};