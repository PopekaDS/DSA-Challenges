// Time: O(n) 
// Space: O(1)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowIndex = 0;
        int fastIndex = 0;

        while(fastIndex < nums.size()) {
            if(nums[fastIndex] != val) {
                nums[slowIndex] = nums[fastIndex];
                ++slowIndex;
            }

            ++fastIndex;
        }

        return slowIndex;
    }
};