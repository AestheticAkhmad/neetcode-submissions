class Solution {
public:
    int characterReplacement(string s, int k) {
        int freqs[26] = {0};

        int left{}, maxFreq{}, result{};
        
        for (int right = 0; right < s.size(); ++right) {
            freqs[s[right] - 'A']++;

            maxFreq = max(maxFreq, freqs[s[right] - 'A']);

            if (right - left + 1 - maxFreq > k) {
                freqs[s[left] - 'A']--;
                ++left;
            }

            result = max(result, right - left + 1);
        }
        
        return result;
    }
};
