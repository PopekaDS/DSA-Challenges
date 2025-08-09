// Time: O(log(n))
// Space: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();

        while(right - left > 1) {
            int middle = (right + left) / 2;
            if(nums[middle] <= target) {
                left = middle;
            } else {
                right = middle;
            }
        }

        return nums[left] == target? left: -1;
    }
};