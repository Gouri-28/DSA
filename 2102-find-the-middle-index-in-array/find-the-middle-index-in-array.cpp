class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int t=0;
        for(auto i=0;i<nums.size();i++){
            t = t+nums[i];
        }
        int l=0;
        for(auto i=0;i<nums.size();i++){
            if(l==t-l-nums[i]){
            return i;
            }
            l = l + nums[i];
        }
        return -1;
    }
};