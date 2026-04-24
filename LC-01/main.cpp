class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int value1,value2;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j && nums[i]+nums[j]==target){
                   
                   value1=i;
                   value2=j;
                   break;
                }
            }
        }
        
        return {value1,value2};
    }
};