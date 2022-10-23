class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int>st;
       vector<int>ans;
       for(int i=1;i<=nums.size();i++)
       st.insert(i);
        int j=0;
      
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i])==st.end())
             {
                   ans.push_back(nums[i]);
             }
             else
             {
                 st.erase(st.find(nums[i]));
             }
        }
         ans.push_back(*st.begin());
        return ans;
        
    }
};