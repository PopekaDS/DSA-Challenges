// Time: O(n) 
// Space: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ht;
        for(int index = 0; index < nums.size(); ++index) {
            if(int elem = target - nums[index]; ht.find(elem) == ht.end()) {
                ht[nums[index]] = index;
            } else {
                return {ht[elem], index};
            }
        }

        return {};
    }
};