//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int solve(int i,int len,int price[],vector<vector<int>>& dp){
        if(i==0) return len*price[0];
        if(dp[i][len]!=-1) return dp[i][len];
        
        int notTake = 0+solve(i-1,len,price,dp);
        int rodlength = i+1;
        int take = INT_MIN;
        if(len>=rodlength){
            take = price[i]+solve(i,len-rodlength,price,dp);
        }
        return dp[i][len]=max(take,notTake);
    }
    int cutRod(int price[], int len) {
        //code here
        int n = len;
        vector<vector<int>> dp(n,vector<int>(len+1,-1));
        return solve(n-1,len,price,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends