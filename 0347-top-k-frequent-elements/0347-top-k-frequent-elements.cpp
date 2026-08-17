class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
        }
        
        for(auto& pair:f){
            int num = pair.first;
            int count = pair.second;
            minHeap.push({count,num});
            if(minHeap.size()>k) minHeap.pop();
        }
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;

    }
};