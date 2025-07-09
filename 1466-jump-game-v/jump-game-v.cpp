class Solution {
public:
    int maxJumps(vector<int>& arr, int d) {
        vector<int16_t> cache(arr.size() + 1, -1);
        return solve(arr, d, arr.size(), cache);
    }

    int solve(vector<int>& nums, int d, int i, vector<int16_t>& cache) {
        if (cache[i] != -1) return cache[i];

        int ans = 0;

        if (i == nums.size()) {
            for (int j = 0; j < nums.size(); j++) {
                ans = max(ans, 1 + solve(nums, d, j, cache));
            }
        }
        else {
            for (int j = i + 1; j <= min(i + d, (int)nums.size() - 1); j++) {
                if (nums[i] > nums[j] && nums[i] >= nums[j - 1]) {
                    ans = max(ans, 1 + solve(nums, d, j, cache));
                }
                else break;
            }

            for (int j = i - 1; j >= max(i - d, 0); j--) {
                if (nums[i] > nums[j] && nums[i] >= nums[j + 1]) {
                    ans = max(ans, 1 + solve(nums, d, j, cache));
                }
                else break;
            }
        }

        cache[i] = ans;
        return ans;
    }
};