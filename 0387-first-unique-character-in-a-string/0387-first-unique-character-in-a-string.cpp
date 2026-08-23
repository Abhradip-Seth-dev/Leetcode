class Solution {
public:
    int firstUniqChar(std::string s) {
        int frequency[26] = {0}; // Assuming only lowercase letters

        // Step 1: Count the frequency of each character
        for (char c : s) {
            frequency[c - 'a']++; // Map 'a' to 0, 'b' to 1, ..., 'z' to 25
        }

        // Step 2: Find the first character with a frequency of 1
        for (int i = 0; i < s.length(); i++) {
            if (frequency[s[i] - 'a'] == 1) {
                return i; // Return the index of the first unique character
            }
        }

        // Step 3: If no unique character is found, return -1
        return -1;
    }
};