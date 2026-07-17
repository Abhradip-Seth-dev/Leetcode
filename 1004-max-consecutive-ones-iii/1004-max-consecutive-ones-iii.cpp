class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,n=nums.size();
        int ans=0;
        unordered_map<int,int> f;
        for(int right=0;right<n;right++){
            f[nums[right]]++;
            int len=right-left+1;
            while(f[0]>k){
                f[nums[left]]--;
                left++;
                len=right-left+1;

            }
            ans=max(ans,len);
        }
        return ans;
    }
};