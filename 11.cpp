class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int start = 0;
        int end = height.size()-1;

        int area = 0;
        while(start < end)
        {
            int distance = end - start;
            int tarea = distance * min(height[start] , height[end]);

            area = max(area, tarea);

            if(height[start] < height[end])
            {
                start++;
            }
            else if(height[start] > height[end])
            {
                end--;
            }
            else
            {
                start++;
                end--;
            }
        }

        return area;
    }
};
