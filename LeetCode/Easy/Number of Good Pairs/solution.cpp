class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        vector<int> count(101, 0); // Constraints: nums[i] <= 100
        for (const int num : nums) {
            ans += count[num]++;
        }
        return ans;
    }
};
