class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxind=0;
        for(auto i=0;i<nums.size();i++){
            if(i>maxind){
                return false;
            }
            maxind = max(maxind , i+nums[i]);
        }
        return true;
    }
};