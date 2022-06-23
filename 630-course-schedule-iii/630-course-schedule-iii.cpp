class Solution {
public:
    static bool compare(vector<int> a, vector<int> b){
        return a[1]<b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {        
        sort(courses.begin(),courses.end(),compare);
        priority_queue<int> p;
        int days_used=0;
        for(int i =0;i<courses.size();i++){
            int duration = courses[i][0], deadline = courses[i][1];
            if(duration+days_used<=deadline){
                days_used+=duration;
                p.push(duration);
            }
            else{
                if(!p.empty() && p.top()>duration){
                    int x = p.top();
                    p.pop();
                    days_used-=x;
                    days_used+=duration;
                    p.push(duration);
                }
            }
        }
        return p.size();
    }
};