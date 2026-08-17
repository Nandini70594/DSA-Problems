class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int wordIndex = 1;
        int i = 0;

        while (i < sentence.size()) {
            int j = 0;

            // Compare current word with searchWord
            while (i < sentence.size() && sentence[i] != ' ' && j < searchWord.size()) {
                if (sentence[i] != searchWord[j]) {
                    break;
                }
                i++;
                j++;
            }

            // If all characters of searchWord matched
            if (j == searchWord.size()) {
                return wordIndex;
            }

            // Move to the end of current word
            while (i < sentence.size() && sentence[i] != ' ') {
                i++;
            }

            // Move past space
            if (i < sentence.size()) {
                i++;
            }

            wordIndex++;
        }

        return -1;
    }
};