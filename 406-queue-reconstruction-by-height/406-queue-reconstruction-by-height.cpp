class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end());
        vector<vector<int>> res(people.size(),{-1,-1});
        for(auto it:people){
            int idx = it[1],count = 0;
            for(int i=0;i<people.size();i++){
                if(count==idx && res[i][0]==-1){
                    res[i]=it;
                    break;
                }
                if(res[i][0]==-1 || res[i][0]>=it[0]) count++;
            }
        }
        return res;
    }
};