class Solution {
public:
    void combinationSums(vector<int>& candidates,int idx,int n,vector<int>& curr,vector<vector<int>>& res,int sum,int target){
        if(idx==n){
            if(sum==target)
            res.push_back(curr);
            return;
        } 
            
        // nahi lena hai
        combinationSums(candidates,idx+1,n,curr,res,sum,target);
        //lena hai
        if(sum+candidates[idx]<=target){
            curr.push_back(candidates[idx]);
            sum+=candidates[idx];
            combinationSums(candidates,idx,n,curr,res,sum,target);
            curr.pop_back();
            sum-=candidates[idx];
        }
        return;
    }   
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        combinationSums(candidates,0,candidates.size(),curr,res,0,target);
        return res;
    }
};