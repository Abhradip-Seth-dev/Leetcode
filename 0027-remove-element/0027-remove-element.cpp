class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int first =0,second=0,n=nums.size();
        for(int second=0;second<n;second++){
            if(nums[second]!=val){
                nums[first]=nums[second];
                first++;
            }
        }
        return first;
    }
};