//Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".
  
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Check if the vector is empty
        if (strs.empty()) {
            return "";
        } else {
            // Initialize the prefix with the first string in the vector
            string prefix = strs[0];

            // Iterate through the rest of the strings in the vector
            for (size_t i = 1; i < strs.size(); i++) {
                // Initialize a counter for matching characters
                size_t j = 0;

                // Compare each character of the current string with the current prefix
                while (j < prefix.length() && j < strs[i].length() &&
                       prefix[j] == strs[i][j]) {
                    // Increment the counter for matching characters
                    j++;
                }

                // Update the prefix based on the comparison
                prefix = prefix.substr(0, j);
            }

            // Return the longest common prefix among all strings
            return prefix;
        }
    }
};
