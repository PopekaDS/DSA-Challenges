// Time: O(n)
// Space: O(1)

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int result = 0;
        int left = 0;
        int right = 0;
        unordered_map<int, int> basket;

        while(right < fruits.size()) {
            ++basket[fruits[right]];
            while(basket.size() > 2) {
                --basket[fruits[left]];
                if(basket[fruits[left]] == 0) {
                    basket.erase(fruits[left]);
                }
                ++left;
            }

            result = max(result, right - left + 1);
            ++right;
        }

        return result;
    }
};