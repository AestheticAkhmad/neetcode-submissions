class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        unordered_map<char, int> chars;
        unordered_map<char, int> matchedChars;

        for (const auto& c : s1) {
            chars[c] += 1;
        }

        int left{};

        for (int right = 0; right < s2.size(); ++right) {
            matchedChars[s2[right]] += 1;

            if (right - left + 1 > s1.size()) {
                matchedChars[s2[left]] -= 1;

                if (matchedChars[s2[left]] <= 0) {
                    matchedChars.erase(s2[left]);
                }

                ++left;
            }

            if (right - left + 1 == s1.size()) {
                if (matchedChars == chars) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
