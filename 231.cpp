class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        int i = 0;
        while(i != 32)
        {
            if(pow(2,i) == n)
            {
                return true;
            }
            i++;
        }

        return false;
    }
};
