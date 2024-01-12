//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string encryptString(string s){
    // code here
    string ans="";
    for(int i=1;i<=s.size();i++){
        int n=1;
        while(s[i-1]==s[i]) {
            n++;
            i++;
        }
        ans+=s[i-1];
        ans+=to_string(n);
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}

// } Driver Code Ends