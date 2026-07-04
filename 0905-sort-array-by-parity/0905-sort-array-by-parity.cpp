class Solution {
public:
// actually we can solve this problem with dutch national flag algortihm but we use this , we also can use that both has 0(n) time complexity
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};