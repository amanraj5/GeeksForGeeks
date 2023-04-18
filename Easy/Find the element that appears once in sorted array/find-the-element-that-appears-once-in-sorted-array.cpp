//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
  int search(int arr[],int l,int h){
      int mid=l+(h-l)/2;
      while(l<=h){
            
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
                return arr[mid];
            }
            else if(arr[mid]==arr[mid+1] && (mid)%2!=0){
                return search(arr,0,mid-1);
            }
            else{
                return search(arr,mid+1,h);
            }
        }
  }
    int findOnce(int arr[], int n)
    {
        //code here.
        if(n%2==0) return -1;
        return search(arr,0,n-1);
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends