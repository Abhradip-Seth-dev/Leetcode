class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int h : st) {
            if (st.find(h - 1) == st.end()) {
                int current = h;
                int length = 1;

                while (st.find(current + 1) != st.end()) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};