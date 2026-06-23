class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first=0,second=1;
        while(second<nums.size()){
            if(nums[first]!=nums[second]){
                first++;
                nums[first]=nums[second];
                second++;
            }
            else{
                second++;
            }
        }
        return first+1;
    }
};