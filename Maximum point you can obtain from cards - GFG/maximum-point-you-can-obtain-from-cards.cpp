//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long maxScore(vector<int> &a, int N, int k) {
        // code here
        // long long tsum = 0;
        // long long prefix[n];
        // prefix[0]=a[0];
        // for(int i =0;i<n;i++) tsum+=a[i]; 
        // for(int i =0;i<n-1;i++) prefix[i+1]=prefix[i]+a[i+1];
        
        // int ws = n-k;
        // long long ans = 0; 
        // int i =0,j=n-k-1;
        // while(j<n)
        // {
        //     ans = max(ans, tsum-prefix[j]);
        //     j++;
        //     i++;
        // }
        // return ans;
        int n=a.size();
        vector<int> pre(n+1,0);
        for(int i=0;i<n;i++)
            pre[i+1]=pre[i]+a[i];
        int sum=0;
        for(auto x:a) sum+=x;
        int ans=INT_MAX;
        int z=n-k;
        for(int i=0;i<=k;i++){
            ans=min(ans,pre[i+z]-pre[i]);
        }
        return sum-ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, k;
        cin >> N >> k;

        vector<int> cardPoints(N);
        for (int i = 0; i < N; i++) cin >> cardPoints[i];

        Solution obj;
        cout << obj.maxScore(cardPoints, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends