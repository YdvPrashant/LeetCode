class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) 
    {
        vector<string> temp;
        vector<string> ans;
        int size = 0;
        int ones = 0;

        for(int i=0;i<words.size();i++)
        {
            if(words[i].length() + size + ones <= maxWidth)
            {
                ones++;
                size += words[i].length();
                temp.push_back(words[i]);
            }
            else
            {
                int space = maxWidth - size;
                int z;
                vector<int> sp(temp.size() > 1 ? temp.size() - 1 : 1, 0);
                while(space > 0)
                {
                    for(int j=0;j<sp.size();j++)
                    {
                        if(space == 0) break;
                        sp[j]++;
                        space--;
                    }
                }

                string st = "";
                for(int j=0;j<temp.size();j++)
                {
                    st += temp[j];
                    if(j < sp.size())
                    {
                        st.append(sp[j], ' ');
                    }
                }
                ans.push_back(st);
                temp.clear();
                size = 0;
                ones = 0;
                --i;
            }
        }
        string st = "";
        for (int j = 0; j < temp.size(); j++) 
        {
            st += temp[j];
            if (j < temp.size() - 1) 
            {
                st += ' ';
            }
        }
        int space = maxWidth - size - (temp.size() - 1);
        if (space > 0) 
        {
            st.append(space, ' ');
        }
        ans.push_back(st);
        return ans;
    }
};
