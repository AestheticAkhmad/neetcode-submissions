class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> charFreq;

        for (int i = 0; i < s.size(); ++i) {
            charFreq[s[i]] += 1;
            charFreq[t[i]] -= 1;
        }

        for (const auto& p : charFreq) {
            if (p.second != 0)
                return false;
        }

        return true;
    }
};
