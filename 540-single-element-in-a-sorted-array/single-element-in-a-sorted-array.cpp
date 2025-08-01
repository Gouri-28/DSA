class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        int ele;
        for(auto i=0;i<nums.size();i++){
        freq[nums[i]]++;
        }
        for(auto &i:freq){
            if(i.second==1){
                ele = i.first;
            }
        }
        return ele;
    }
};