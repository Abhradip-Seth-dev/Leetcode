class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int first =0,second=0,n=nums.size();
        for(int second =0;second<n;second++){
            if(nums[second]!=0){
                nums[first]=nums[second];
                first++;
            }
        }
        while(first<n){
            nums[first]=0;
            first++;
        }
    }
};