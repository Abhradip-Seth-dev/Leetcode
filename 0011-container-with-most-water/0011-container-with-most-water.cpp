class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size()-1;
        int res =0;
        while(left<right){
            int minwb=min(height[left],height[right]);
            int containw=minwb*(right-left);
            res=max(res,containw);
            if(height[left]<height[right]){
                left++;
            }
            else right--;
        }
        return res;
    }
};