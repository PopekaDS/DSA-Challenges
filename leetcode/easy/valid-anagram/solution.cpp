// Time: O(n) 
// Space: O(n)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }

        unordered_map<int, int> ht;
        for(int index = 0; index < s.size(); ++index) {
            ++ht[s[index]];
            --ht[t[index]];
        }

        for(auto elem: ht) {
            if(elem.second != 0) {
                return false;
            }
        }

        return true;
    }
};