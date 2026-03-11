class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int tot = nums1.size()+nums2.size();
        int v[tot];
        int t = 0;
        int j = 0,k = 0;

        for(int i=0;i<tot;i++)
        {
            if(j<nums1.size() && k<nums2.size())
            {
                if(nums1[j]<nums2[k])
                {
                    v[t++] = nums1[j++];
                }
                else
                {
                    v[t++] = nums2[k++];
                }
            }
            
            else if(j<nums1.size())
            {
                v[t++] = nums1[j++];
            }
            else
            {
                v[t++] = nums2[k++];
            }
        }
        
        int mid = tot/2;
        if(tot%2 == 0)
        {
            double ans = (v[mid-1]+v[mid])/2.0;
            return ans;
        }
        else
        {
            return v[mid];
        }
    }
};
