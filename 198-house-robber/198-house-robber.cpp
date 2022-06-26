class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        dp[0] = nums[0];
    
        for(int i=1;i<nums.size();i++){
            if(i - 2 >= 0) dp[i] = max(dp[i-1],dp[i-2]+nums[i]); 
            else dp[i] = max(nums[i],dp[i-1]);
        }
        return dp[nums.size()-1];
    }
};