class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();
        long long mod=pow(10,9)+7, res=0;
        sort(arr.begin(),arr.end());
        unordered_map<int,long long> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=1;
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0)
                    mp[arr[i]] = (mp[arr[i]] + mp[arr[j]] * mp[arr[i] / arr[j]]) % mod;
            }
            res = (res + mp[arr[i]]) % mod;
            
        }
        return res%mod;
    }
};