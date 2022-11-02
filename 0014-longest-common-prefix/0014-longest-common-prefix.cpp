class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int i;
        char ch;
        //FOR TRAVERSING ALL CHARACTERS OF FIRST STRING
        int n=strs.size();
        for( i=0;i<strs[0].length();i++)
        {
         ch=strs[0][i];
        bool match=true;
        //FOR COMPARISION CHARACTER WITH REST OF STRING
        for(int j=1;j<n;j++)
        {
            //IF NOT MATCH
            if(strs[j].size()<i || ch!=strs[j][i])
            {
                match=false;
                break;
            }
        }
            if(match==false)
                break;
            else
            res.push_back(ch);
            
        }
        return res;
            }
    
};