// Time: O(log(n)) 
// Space: O(1)

class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) {
            return x;
        }

        int left = 0;
        int right = x;
        while(right - left > 1) {
            int middle = (right + left) / 2;
            if(middle <= x / middle) {
                left = middle;
            } else {
                right = middle;
            }
        }

        return left;
    }
};