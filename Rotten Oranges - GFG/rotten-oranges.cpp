//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        queue<pair<pair<int, int>, int>> q;

    int n = grid.size();
    int m = grid[0].size();
    int count = 0;

    // Create a 2D grid to store whether a cell has been visited
    vector<vector<int>> vis(n, vector<int>(m, 0));

    // Add all rotten oranges to the queue and set their corresponding
    // values in the vis grid to 2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) {
                q.push({{i, j}, 0});
                vis[i][j] = 2;
            }
            else if (grid[i][j] == 1) {
                count++;
            }
        }
    }

    // Constants to check the elements in the up, down, left, and right directions
    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};
    int tm = 0;

    // While the queue is not empty
    while (!q.empty()) {
        // Remove the front element from the queue and store its coordinates
        // in (i, j)
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        tm = max(tm, t);
        q.pop();

        // Check the elements in the up, down, left, and right directions
        for (int i = 0; i < 4; i++) {
            int nrow = r + drow[i];
            int ncol = c + dcol[i];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && vis[nrow][ncol] != 2) {
                q.push({{nrow, ncol}, t + 1});
                vis[nrow][ncol] = 2;
                count--;
            }
        }
    }

    // Check if there are any fresh oranges left
    if (count != 0) {
        return -1;
    }
    return tm;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends