class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        
        int s=0;
        map<int,int> m;
        for(auto i:nums)
            m[i]++;
        for(auto j:m)
        {
            if(j.second==1)
                s=s+j.first;
        }
        return s;
    }
    
    
};