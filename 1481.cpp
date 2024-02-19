
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        unordered_map<int, int> mp;
        vector<pair<int,int>> freq;
        for(auto i: arr)
        {
            mp[i]++;
        }

        for(auto a: mp)
        {
            int b = a.first;
            int c = a.second;
            freq.push_back({c, b});
        }

        sort(freq.begin(), freq.end());

        int i=0;
        while(k > 0)
        {
            k -= freq[i].first;
            if(k >= 0)
            {
                freq[i].first = 0;
            }
            else
            {
                freq[i].first -= k;
            }
            i++;
        }

        int count = 0;

        for(auto i: freq)
        {
            if(i.first > 0)
            {
                count++;
            }
        }
        return count;
    }
};
