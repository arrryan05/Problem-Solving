class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        int count=1 , pdiff = 0, cdiff = 0;
        for(int i=1;i<n;i++){
            cdiff = nums[i]-nums[i-1];
            if((cdiff>0 && pdiff<=0) || (cdiff < 0 && pdiff>=0)){
                count++;
                pdiff = cdiff;
            }
        }
        return count;
    }
};