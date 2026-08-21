class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int buy,profit=0;
        int n=nums.size();
        buy=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<buy){
                buy=nums[i];
            }else if(nums[i]-buy>profit){
                profit = nums[i]-buy;
            }
        }
        return profit;
    }
};