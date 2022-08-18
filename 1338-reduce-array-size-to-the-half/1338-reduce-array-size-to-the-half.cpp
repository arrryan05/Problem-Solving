class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> m;
        for(auto a:arr){
            m[a]++;
        }
        vector<int> frequency;
        for(auto x:m){
            frequency.push_back(x.second);
        }
        sort(frequency.begin(),frequency.end());
        int i=frequency.size()-1, last = n/2 ,count=0,ans=0;
        while(count<last){
            ans++;
            count+=frequency[i--];
        }
        return ans;
        
    }
};