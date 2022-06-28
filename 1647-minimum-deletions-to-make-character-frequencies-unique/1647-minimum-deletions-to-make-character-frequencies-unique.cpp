class Solution {
public:
    int minDeletions(string s) {
        int ans = 0;
        unordered_map<char, int> char_counts;
        for (char& c : s) char_counts[c]++;
        unordered_set<int> seen;
        for (auto x : char_counts) {
            while (seen.find(x.second) != seen.end()) {
                x.second--;
                ans++;
            }
            if (x.second > 0) seen.insert(x.second);
        }
        return ans;
        
    }
};