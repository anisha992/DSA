class Solution {
public:
    // Function to convert a Roman numeral string to an integer
    int romanToInt(std::string s) {
        int integer = 0;     
        int prevValue = 0;   
        // Iterate through each character in the Roman numeral string
        for (char ch : s) {
            int value = getValue(ch);   // Get the integer value of the current Roman numeral character

            // Compare with the previous value to handle subtractive combinations
            if (value > prevValue) {
                // If the current value is greater than the previous, subtract the double of the previous
                // This handles cases like IV (4) or IX (9)
                integer += value - 2 * prevValue;
            } else {
                // If the current value is not greater than the previous, simply add the value
                integer += value;
            }

            // Update the previous value for the next iteration
            prevValue = value;
        }

        return integer;   // Return the final converted integer
    }

    // Function to get the integer value of a single Roman numeral character
    int getValue(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;   // Return 0 for invalid characters
        }
    }
};
