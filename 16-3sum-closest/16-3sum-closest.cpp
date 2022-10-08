class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int closest = nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int curr_sum = nums[i]+nums[j]+nums[k];
                if(curr_sum == target){
                    return curr_sum;
                }
                if(abs(target-curr_sum)<abs(target-closest)){
                    closest = curr_sum;
                }
                if(curr_sum>target) k--;
                else j++;
            }
        }
        return closest;
    }
};