class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> set(nums.cbegin(), nums.cend());

        bool response = (set.size() != nums.size()) ? true : false ;
        return response;
    }
};
