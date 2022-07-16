class Solution {
public:
    long long mod = 1e9+7;
    int helper(int m,int n,int maxMoves,int i, int j,int moves, vector<vector<vector<int>>> &dp){
        if(i<0 || j<0 || i>=m || j>=n ){
            cout << 'a' << endl;
            return 1;
        }
        if(moves==maxMoves) return 0;
        if(dp[moves][i][j]!=-1){
            return dp[moves][i][j];
        }
        long long curr_val = 0;
        curr_val = (curr_val+helper(m,n,maxMoves,i-1,j,moves+1,dp))%mod;
        curr_val = (curr_val+helper(m,n,maxMoves,i,j-1,moves+1,dp))%mod;
        curr_val = (curr_val+helper(m,n,maxMoves,i+1,j,moves+1,dp))%mod;
        curr_val = (curr_val+helper(m,n,maxMoves,i,j+1,moves+1,dp))%mod;
        dp[moves][i][j] = curr_val;
        return dp[moves][i][j];
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(maxMove+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return helper(m,n,maxMove,startRow,startColumn,0,dp);
    }
};