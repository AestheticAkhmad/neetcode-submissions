class Solution {
    int getMostFreqCharCount(auto& m) {
        int freq{};
        for (const auto& p : m) {
            freq = max(freq, p.second);
        }

        return freq;
    }
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> m;

        int left{}, right{}, result{}, count{k};
        
        while (right < s.size()) {
            m[s[right]] += 1;
            if (right - left + 1 - getMostFreqCharCount(m) <= k) {
                result = max(result, right - left + 1);
            } else {
                m[s[left]] -= 1;
                if (m[s[left]] < 0)
                    m[s[left]] = 0;
                ++left;
            }
            ++right;
        }
        
        return result;
    }
};
