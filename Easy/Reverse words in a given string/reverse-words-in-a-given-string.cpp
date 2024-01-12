//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string> st;
        string temp="",ans="";
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){ 
                st.push(temp);
                temp="";
            }
            else{
                temp+=S[i];
            }
        }
        st.push(temp);
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty()) ans+=".";
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends