//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool equalPartition(vector<int> arr) {
        // code here
        int n=arr.size();
        long sum=0;
        for(int num:arr)
            sum+=num;
        if(sum%2!=0) 
            return false;
        sum/=2;
        int dp[n+1][sum+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(j==0)
                    dp[i][j]=1;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j)
                    dp[i][j]=dp[i-1][j-arr[i-1]] or dp[i-1][j];
                else 
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends