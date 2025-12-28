class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        for(auto i =0;i<nums.size();i++){
            if(nums[i]>0){
                pos++;
            }
            else if (nums[i]<0){
                neg++;
            }
        }
        int maxx = max(pos,neg);
        return maxx;
    }
};