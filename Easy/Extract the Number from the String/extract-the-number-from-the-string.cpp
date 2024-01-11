//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    long long ExtractNumber(string S){
        
        //code here
        long long answer=-1;
        
        for(int i=0;i<S.size();i++){
            string num="";
            if(S[i]>='0' && S[i]<='9'){
                bool k=true;
                while(i<S.size() && S[i]!=' '){
                    if(S[i]=='9'){
                        k=false;
                    }
                    num+=S[i];
                    i++;
                }
                if(k){
                long long int temp=stoll(num);
                answer=max(answer,temp);
            }   
            }
            
            
        }
        
        return answer;
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.ExtractNumber(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends