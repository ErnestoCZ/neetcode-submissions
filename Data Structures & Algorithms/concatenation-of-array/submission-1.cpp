#include <cstring>
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans.resize(nums.size() * 2);
        nums.shrink_to_fit();

        std::memcpy((int*)&ans[0], (int*)&nums[0], nums.size() * sizeof(int));
        std::memcpy((int*)&ans[nums.size()], (int*)&nums[0], nums.size() * sizeof(int));

        // for(size_t index = 0; index < ans.size(); index++){
        //     ans[index] = nums[index % nums.size()];
        // }
        return ans;
    }
};