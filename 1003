class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;

        for(auto i: s)
        {
            st.push(i);
            if(st.size() >= 3)
            {
                if(st.top() == 'c')
                {
                    st.pop();
                    if(st.top() == 'b')
                    {
                        st.pop();
                        if(st.top() == 'a')
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push('b');
                            st.push('c');
                        }
                    }
                    else
                    {
                        st.push('c');
                    }
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};
