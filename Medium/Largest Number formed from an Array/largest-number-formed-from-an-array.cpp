//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool compare(string &a,string &b){
	    return a+b>b+a;
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    sort(arr.begin(),arr.end(),compare);
	   // string ans1="";string ans2="";
	   // ans1=arr[0];
	   // ans2=arr[0];
	    string ans="";
	   // for(int i=1;i<arr.size();i++){
	   //     string s1=ans1.append(arr[i]);
	   //     string s2=arr[i].append(ans2);
	   //     ans=max(s1,s2);
	   //     ans1=ans;
	   //     ans2=ans;
	   // }
	   
	   for(auto it:arr){
	       ans+=it;
	   }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends