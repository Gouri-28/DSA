class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t = 0;
        for(auto i=0;i<nums.size();i++){
            t = t+nums[i];
        }
        int lsum = 0;

        for(auto i=0;i<nums.size();i++){
            if(lsum==t-lsum-nums[i])
            return i;
        
            lsum = lsum+nums[i];
        }
        return -1;
    }
};