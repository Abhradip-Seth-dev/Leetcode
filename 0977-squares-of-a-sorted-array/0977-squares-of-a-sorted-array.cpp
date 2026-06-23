class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int i=0;
        int j=nums.size()-1;
        for(int p=j;p>=0;p--){
            if(abs(nums[i])>abs(nums[j])){
                res[p]=nums[i]*nums[i];
                i++;
            }
            else{
                res[p]=nums[j]*nums[j];
                j--;
            }
        }
            return res;
        
        
        
    }
};