class Solution {
public:
    bool isPerfectSquare(int num) {
        long int s=1;
        long int e=num/2;
        if(num==1)
            return 1;
        while(s<=e)
        {  
            long int mid=(s+e)/2;
            long int sq=mid *mid;
            if(sq==num)
            {
                return 1;
            }
            if(sq<num)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return 0;
    }
};