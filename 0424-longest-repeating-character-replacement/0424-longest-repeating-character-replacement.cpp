class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,right,n=s.size();
        int ans=INT_MIN;
        unordered_map<int,int> f;
        int maxFreq=INT_MIN;
        for(int right=0;right<n;right++){
            f[s[right]]++;
            maxFreq = max(maxFreq, f[s[right]]);
            int len=right-left+1;
            while(len-maxFreq>k){
                f[s[left]]--;
                left++;
                len=right-left+1;
            }
            ans=max(ans,len);
        }
        return ans;
    }
};