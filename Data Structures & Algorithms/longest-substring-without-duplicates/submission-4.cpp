class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() <= 1) return s.size();

        unordered_map<char, int> window;
        int result{}, left{};

        for (int right = 0; right < s.size(); ++right) {
            if (window.contains(s[right]) && window[s[right]] >= left) {
                left = window[s[right]] + 1;       
            }
            window[s[right]] = right;
            result = max(result, right - left + 1);
        }

        return result;
    }
};
