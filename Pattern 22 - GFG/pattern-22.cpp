//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        int i=0,j=0,k;
        for(int i=1;i<2*n;i++){
            k = n;
            for(int j=1;j<2*n;j++){
                cout<<k<<" ";
                if(i>j) k--;
                if(i+j>=2*n) k++;
            }
            cout<<endl;
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends