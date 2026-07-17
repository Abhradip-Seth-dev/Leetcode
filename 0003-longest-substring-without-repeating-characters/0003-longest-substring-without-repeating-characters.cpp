class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> f;
        int left=0;
        int n=s.size();
        int ans =INT_MIN;
        for(int right=0;right<n;right++){
            f[s[right]]++;
            int len=right-left+1;
            while(f[s[right]]>1){
                f[s[left]]--;
                left++;
                len=right-left+1;
            }
            ans=max(len,ans);

        }
        return ans==INT_MIN?0:ans;
    }
};