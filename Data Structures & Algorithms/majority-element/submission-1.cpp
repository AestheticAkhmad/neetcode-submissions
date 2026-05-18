class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter{}, curr = nums[0];
        for (const auto& n : nums) {
            if (curr == n) {
                counter += 1;
                continue;
            }

            counter -= 1;
            if (counter == 0) {
                curr = n;
                counter += 1;
            }
        }

        return curr;
    }
};