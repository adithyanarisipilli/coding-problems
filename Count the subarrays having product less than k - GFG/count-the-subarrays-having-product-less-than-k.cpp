//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long count=0,j=0,ans=0;
        long long product=1;
        for(int i=0;i<n;i++){
            product*=a[i];
            while(product>=k&&j<=i){
                product/=a[j];
                j++;
            }
            ans+=(i-j+1);
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
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends