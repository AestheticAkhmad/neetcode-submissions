class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count{}, curr{}, next{}, end{};

        if (nums.size() == 0) return 0;

        while (curr < nums.size() && next < nums.size()) {
            if (nums[curr] == val) {
                if (nums[next] == val) {
                    ++next;
                    continue;
                } else if (curr < next) {
                    swap(nums[curr], nums[next]);
                }
            }

            ++curr;
            ++next;
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == val)
                return i;
        }

        return nums.size();
    }
};



/*

3 2 2 3, 3
i
j



*/











