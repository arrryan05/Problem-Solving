class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minMoves = 0;
        int minElement = *min_element(nums.begin(), nums.end());
        for(int element:nums){
            minMoves += element - minElement;
        }
        return minMoves;
    }
};