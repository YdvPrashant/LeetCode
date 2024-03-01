class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        if(ratings.size() == 1) return 1;

        vector<int> candy(ratings.size(), 1);

        for(int i=0;i<ratings.size()-1;i++)
        {
            if(ratings[i] > ratings[i+1] && candy[i] <= candy[i+1])
            {
                candy[i]++;
            }
            else if(ratings[i] < ratings[i+1])
            {
                candy[i+1] = candy[i];
                candy[i+1]++;
            }
        }
        for(int i=ratings.size()-1;i>0;i--)
        {
            
            if(ratings[i] < ratings[i-1] && candy[i] >= candy[i-1])
            {
                candy[i-1] = candy[i];
                candy[i-1]++;
            }
        }

        int ans = 0;
        for(auto i: candy)
        {
            ans += i;
        }
        return ans;
    }
};
