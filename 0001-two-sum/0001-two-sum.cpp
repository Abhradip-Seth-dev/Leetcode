class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int n=nums.size();
        int sum=0;
        int j=0;
        while(i<n){
            j=i+1;
            while(j<n){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
                j++;
            }
            i++;
        }
        return {};
    }
};