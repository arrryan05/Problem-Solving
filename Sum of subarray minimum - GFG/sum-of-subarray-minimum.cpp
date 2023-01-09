//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  const int MOD = 1000000007;
    int sumSubarrayMins(int N, vector<int> &arr) {
        stack<int> st;
    int left_smaller[N];
    int right_smaller[N];
    for (int i = 0; i < N; i++) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            st.pop();
        }
        if (st.empty()) {
            left_smaller[i] = -1;
        } else {
            left_smaller[i] = st.top();
        }
        st.push(i);
    }
    while (!st.empty()) {
        st.pop();
    }
    for (int i = N-1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        if (st.empty()) {
            right_smaller[i] = N;
        } else {
            right_smaller[i] = st.top();
        }
        st.push(i);
    }
    long long result = 0;
    for (int i = 0; i < N; i++) {
        long long min_val = (long long)arr[i] * (i - left_smaller[i]) * (right_smaller[i] - i);
        result += min_val;
    }
    return result % MOD;
      
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.sumSubarrayMins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends