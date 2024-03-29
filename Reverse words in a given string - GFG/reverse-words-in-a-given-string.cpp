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
       stack<string> st;
       string s="";
       for(int i=0;i<S.size();i++)
       {
           if(S[i]=='.')
           {
               st.push(s);
               s="";
           } 
           else
           {
               s=s+S[i];
           }
       } 
       st.push(s);
       string res="";
       while(!st.empty())
       {
           string str=st.top();
           st.pop();
           res=res+str+".";
       } 
       res.pop_back();
       return res;
        
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