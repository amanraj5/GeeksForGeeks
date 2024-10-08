//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int moves(int n, int p, int q) {
        // Your code goes here
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            if(i>=p && dp[i-p]!=INT_MAX){
                dp[i]=min(dp[i-p]+1,dp[i]);
            }
            if(i>=q && dp[i-q]!=INT_MAX){
                dp[i]=min(dp[i-q]+1,dp[i]);
            }
        }
        return dp[n]==INT_MAX?-1:dp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int n, p, q, t;
    cin >> t;
    while (t--) {
        cin >> n >> p >> q;
        Solution ob;
        cout << ob.moves(n, p, q) << endl;
    }
}

// } Driver Code Ends