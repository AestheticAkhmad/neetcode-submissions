class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> window;
        int result{};

        for (int i = 0; i < s.size(); ++i) {
            if (window.contains(s[i])) {
                result = max(result, static_cast<int>(window.size()));
                auto elem = window[s[i]];

                erase_if(window, [&elem](const auto& p) {
                    return p.second < elem;
                });

            }
            window[s[i]] = i;
        }

        result = max(result, static_cast<int>(window.size()));

        return result;
    }
};
