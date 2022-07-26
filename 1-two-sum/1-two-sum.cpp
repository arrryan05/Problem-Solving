class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
       map<int,int> m;
       vector<int> v;
       for(int i=0;i<arr.size();i++){
           m[arr[i]]=i;
       }
       for(int i=0;i<arr.size();i++)
       {
         int x=k-arr[i];
         auto it=m.find(x);
         if(it!=m.end())
         {
           if(it->second!=i)
           {
             v.push_back(it->second);
             v.push_back(i);
             return v;
           }
         }
       }
       return v;
    }
};