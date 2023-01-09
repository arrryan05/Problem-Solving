//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string s, int k) {
    //     int n = num.size();
    // stack<char> mystack;
    // // Store the final string in stack
    // for (char c : num) {
    //     while (!mystack.empty() && k > 0
    //           && mystack.top() > c) {
    //         mystack.pop();
    //         k -= 1;
    //     }

    //     if (!mystack.empty() || c != '0'){
    //         mystack.push(c);
    //     }
    // }

    // // Now remove the largest values from the top of the
    // // stack
    // while (!mystack.empty() && k--)
    //     mystack.pop();
    // if (mystack.empty())
    //     return "0";

    // // Now retrieve the number from stack into a string
    // // (reusing num)
    // while (!mystack.empty()) {
    //     num[n - 1] = mystack.top();
    //     mystack.pop();
    //     n -= 1;
    // }
    // return num.substr(n);
        stack<char> sta;
        string ans="";
        for(char c: s){
            while(!sta.empty()&& k>0 && sta.top()>c){
                sta.pop();
                k--;
            }
            if(!sta.empty() || c!='0'){
                sta.push(c);
            }
        }
         while(!sta.empty() && k--){
             sta.pop();
         }
         if(sta.empty()) return "0";
        while(!sta.empty()){
            ans= sta.top()+ans; sta.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends