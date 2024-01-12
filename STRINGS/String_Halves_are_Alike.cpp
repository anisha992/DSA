class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        std::string a = s.substr(0, n / 2);
        std::string b = s.substr(n / 2, n);
        int x = countVowels(a);
        int y = countVowels(b);
        if (x == y) {
            return true;
        }
        return false;
    }

private:
    int countVowels(const std::string& inputString) {
        int vowelCount = 0;

        for (char ch : inputString) {
            // Convert the character to lowercase for case-insensitive comparison
            char lowerCh = std::tolower(ch);

            // Check if the character is a vowel
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' ||
                lowerCh == 'o' || lowerCh == 'u') {
                vowelCount++;
            }
        }

        return vowelCount;
    }
};
