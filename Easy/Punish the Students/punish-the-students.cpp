//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int shouldPunish (int roll[], int marks[], int n, double avg)
    {
        // your code here
        int cnt=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=marks[i];
        }
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                if(roll[i]>roll[j]){
                    swap(roll[i],roll[j]);
                    cnt++;
                }
            }
        }
        if((sum-cnt)/n<=avg)
        return 0;
        return 1;
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		double avg; cin >> avg;

		int roll[n];
		int marks[n];

		for (int i = 0; i < n; ++i)
			cin >> roll[i];
		for (int i = 0; i < n; ++i)
			cin >> marks[i];
        Solution ob;
		cout << ob.shouldPunish (roll, marks, n, avg) << endl;
	}
}

// } Driver Code Ends