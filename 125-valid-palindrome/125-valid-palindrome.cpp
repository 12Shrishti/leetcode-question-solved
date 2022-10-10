class Solution {
    bool valid(char ch)
    {
        if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0' && ch<='9'))
            return 1;
        else 
            return 0;
    }
    char tolowercase(char ch)
    { char temp;
     if((ch>='a'&& ch<='z')|| (ch>='0' && ch<='9'))
        return ch;
     else
         temp=ch-'A'+'a';
     return temp;
     }
    bool checkpalindrome(string m)
    {
        int s=0;
        int e=m.size()-1;
        while(s<=e)
        {
            if(m[s]==m[e])
            {
                s++;
            e--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
    
public:
    bool isPalindrome(string s) {
        string k="";
        int i;
        for(i=0;i<s.size();i++)
        {
            if(valid(s[i]))
                k.push_back(s[i]);
        }
        for(i=0;i<k.size();i++)
        {
            k[i]=tolowercase(k[i]);
        }
        return(checkpalindrome(k));
       
    }
    
};