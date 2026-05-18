class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        auto size = nums.size();
        vector<int> result(size * 2);

        for (int i = 0; i < size; ++i) {
            result[i] = nums[i];
            result[i + size] = nums[i];
        }

        return result;
    }
};