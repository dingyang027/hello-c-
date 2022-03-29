class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1) return s;
        
        int pstart=0, pend=0, p1=0, p2=0;
        
        for(int i = 0;i<s.length();i++)
        {
                for(int j=0; (i-j>=0 && i+j<s.length()); j++ )
                {
                    if(s[i-j] != s[i+j]) break;
                    p1=i-j;
                    p2=i+j;
                }
                if(p2-p1 > pend - pstart)
                {
                    pend = p2;
                    pstart = p1;
                }

                for(int j=0; (i-j>=0 && i+j+1<s.length()); j++ )
                {
                    if(s[i-j] != s[i+j+1]) 
                    {
                        break;
                    }
                    p1=i-j;
                    p2=i+j+1;
                }
                if(p2-p1 > pend - pstart)
                {
                    pend = p2;
                    pstart = p1;
                }
   
        }
        return s.substr(pstart,pend-pstart+1);
    }
};
