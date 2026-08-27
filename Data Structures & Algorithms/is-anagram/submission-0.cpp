#include <algorithm>
class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        
        std::sort(s.begin(),s.end(), std::greater<char>());
        std::sort(t.begin(),t.end(), std::greater<char>());
        return !s.compare(t);
    }
};
