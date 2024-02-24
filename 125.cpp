class Solution {
public:
    bool isPalindrome(string s) 
    {
        string st;

        for(auto i: s)
        {
            if( isalnum(i))
            {
                if(isupper(i))
                {
                    st += tolower(i);
                }
                else
                {
                    st += i;
                }
            }
        }

        int beg = 0;
        int end = st.length() - 1;

        while(beg <= end)
        {
            if(st[beg] != st[end])
            {
                return false;
            }
            beg++;
            end--;
        }
        return true;
    }
};
