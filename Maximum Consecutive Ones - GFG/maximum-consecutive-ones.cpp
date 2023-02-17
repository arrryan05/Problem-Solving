//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int longestOnes(int n, vector<int>& a, int k) 
    {
        int zerocount = 0;
        int i =0; int j =0; int ans =0;
        while(j<n)
        {
            if(a[j]==0) zerocount ++;
            
            while(zerocount>k)
            {
                if(a[i]==0) zerocount--;
                i++;
            }
            ans = max(ans , j-i+1);
            j++;
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends