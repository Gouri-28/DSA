class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        
        sort(nums.begin(), nums.end());
        
        int currl = 1;
        int longl = 1;  // Initialize to 1 since a single element is a sequence

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                continue; // Skip duplicates
            } 
            if (nums[i] == nums[i - 1] + 1) {
                currl++;
            } else {
                longl = max(longl, currl);
                currl = 1;
            }
        }
        
        return max(longl, currl); // Update longl at the end
    }
};