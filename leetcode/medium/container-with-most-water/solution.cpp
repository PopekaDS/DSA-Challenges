// Time: O(n)
// Space: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int result = 0;

        while(left < right) {
            int distance = right - left;
            result = max(result, distance * min(height[left], height[right]));

            if(min(height[left], height[right]) == height[left]) {
                ++left;
            } else {
                --right;
            }
        }

        return result;
    }
};