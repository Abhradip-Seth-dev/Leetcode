class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int sum=0;
        int closest = nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left =i+1,right=n-1;
            while(left<right){
                sum = nums[i]+nums[left]+nums[right];
                if(sum==target) return sum;
                if(abs(sum-target)<abs(closest-target)){
                    closest=sum;
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return closest;

    }
};