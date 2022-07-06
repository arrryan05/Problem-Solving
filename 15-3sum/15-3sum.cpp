class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() < 3) return res;
        sort(nums.begin(), nums.end());
        for(int itr = 0; itr < nums.size()-2; itr++){            
            if(itr == 0 || nums[itr-1] != nums[itr]){
                
                // two pointer's approach
                // a + b + c = 0, so we can make the equation like
                // b + c = -a;
                // low + high = -sum;
                int low = itr+1, high = nums.size()-1, sum = -nums[itr];
                
                while(low < high){
                    if(nums[low] + nums[high] == sum){
                        res.push_back({nums[itr], nums[low], nums[high]});
                        while(low < high && nums[low] == nums[low+1]) low++;
                        while(low < high && nums[high] == nums[high-1]) high--;                   
                        low++;
                        high--;
                    }
                    else if(nums[low] + nums[high] < sum){
                        low++;
                    }
                    else{
                        high--;
                    }
                }                
            }
        }
        return res;
    }
};
