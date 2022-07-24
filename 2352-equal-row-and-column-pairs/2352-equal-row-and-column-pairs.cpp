class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            vector<int> a;
            for(int j=0;j<grid.size();j++){
                a.push_back(grid[j][i]);
            }       
            ans += count(begin(grid),end(grid),a);
        }
        return ans;
    }
};