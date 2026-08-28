class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans.resize(nums.size() * 2);

        for(size_t index = 0; index < ans.size(); index++){
            ans[index] = nums[index % nums.size()];
        }
        return ans;
    }
};