//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int *checkDoorStatus(int N) {
        // code here
        int *a = new int[N];
      for(int i=1;i<=N;i++){
          int no=sqrt(i);
          if(no*no==i){
              a[i-1]=1;
          }
      }
      return a;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        int* ptr = ob.checkDoorStatus(N);
        for(int i=0 ; i<N ; i++)
            cout<<ptr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends