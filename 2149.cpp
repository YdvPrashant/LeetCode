class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        
        vector<int> po;
        vector<int> ne;
        vector<int> ans;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > 0) po.push_back(nums[i]);
            else ne.push_back(nums[i]);
        }

        for(int i=0;i<nums.size()/2;i++)
        {
            ans.push_back(po[i]);
            ans.push_back(ne[i]);
        }
        return ans;
    }
};
