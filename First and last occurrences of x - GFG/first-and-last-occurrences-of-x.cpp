//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int a[], int n , int x )
{
    // code here
    int s=0;
    int e=n-1;
    int ans=-1;
    int ans1=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(a[mid]>x)
        {
            
            e=mid-1;
        }
         if(a[mid]<x)
        {
            
            s=mid+1;
        }
        if(a[mid]==x)
        {
            ans=mid;
            e=mid-1;
        }
        
        
        
    } 
     s=0; e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(a[mid]>x)
        {
            
            e=mid-1;
        }
         if(a[mid]<x)
        {
            
            s=mid+1;
        }
        if(a[mid]==x)
        {
            ans1=mid;
            s=mid+1;
        }
        
        
        
    }
    return {ans,ans1};
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends