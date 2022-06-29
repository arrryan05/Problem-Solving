class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int curr_Max = 1, curr_Min = 1;
        for (int i = 0; i < n; i++) {
            int temp = nums[i] * curr_Max;  
            curr_Max = max({temp, nums[i]*curr_Min, nums[i]});
            curr_Min = min({temp, nums[i]*curr_Min, nums[i]});
            ans = max(ans, curr_Max);
        }
        return ans;
    }
};