class Solution {
    static bool cmp(vector<int>& p1, vector<int>& p2){
        if(p1[0]!=p2[0]) return p1[0]>p2[0];
        else return p1[1]<p2[1];
    }
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {        
        sort(people.begin(), people.end(), cmp);
        vector<vector<int>> peopleAfter;
        for (int i = 0; i < people.size(); i++) {
            if (people[i][1] == peopleAfter.size()) {
                peopleAfter.push_back(people[i]);
            } else {
                peopleAfter.insert(peopleAfter.begin() + people[i][1],
                                   people[i]);
            }
        }
        return peopleAfter;
    }
};