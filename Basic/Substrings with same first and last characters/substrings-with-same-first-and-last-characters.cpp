//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int countSubstringWithEqualEnds(string s)
	{
	    map<char,int>m;
	    int ans=s.length();
	    for(int i=0;i<s.length();i++){
	        if(m[s[i]]){
	            ans+=m[s[i]];
	        }
	        m[s[i]]++;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   	    Solution ob;

   		cout << ob.countSubstringWithEqualEnds(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends