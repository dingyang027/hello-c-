class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m[256]={0},maxl=0,j=0;
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]==0 || m[s[i]]<j)
            {
                maxl=max(maxl,i-j+1);
            }
            else
            {
                j=m[s[i]];
            }
            m[s[i]]=i+1;
        }
        return maxl;
    }
};
