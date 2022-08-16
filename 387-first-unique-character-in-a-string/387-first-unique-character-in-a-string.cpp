class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        
        for(int i=0;i<s.length();i++)
            if(m.find(s[i])==m.end())
                m[s[i]]=i;
            else
                m[s[i]]=-1;
        
        int n=INT_MAX;
        for(auto it: m)
            if(it.second>-1 && it.second<n)
                n=it.second;
        return (n==INT_MAX)?-1:n;
    }
};