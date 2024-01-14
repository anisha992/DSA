class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int count = 0;
        int i = s.size() - 1;  

        // Skip trailing whitespaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count the characters of the last word
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
