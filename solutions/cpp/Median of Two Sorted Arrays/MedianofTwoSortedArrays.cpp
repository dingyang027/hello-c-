class Solution {
public:
   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size(),size2=nums2.size();
        int size=size1+size2;
        int median=size/2;
        int start1=0,start2=0;
        bool odd= (size%2==1) ? true:false;
        vector<int> ans(size);    
        for(int i=0;i<=median;i++)
        {
            if(start1 == size1 && start2 != size2)
            {
                ans[i]=nums2[start2];
                start2++;
                continue;
            }
            if(start2 == size2 && start1 != size1)
            {
                ans[i]=nums1[start1];
                start1++;
                continue;
            }
            
            if(nums1[start1] >= nums2[start2])
            {
                ans[i]=nums2[start2];
                start2++;
            }
            else
            {
                ans[i]=nums1[start1];
                start1++;
            }
        }return odd ? ans[median]:(ans[median]+ans[median-1])/2.0;
   }
};
