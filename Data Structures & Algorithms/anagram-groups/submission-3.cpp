class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for (int i = 0; i < strs.size(); ++i) {
            auto sortedWord = strs[i];
            sort(begin(sortedWord), end(sortedWord));
            m[sortedWord].push_back(move(strs[i]));
        }

        vector<vector<string>> result;
        for (const auto& p : m) {
            result.push_back(move(p.second));
        }

        return result;
    }
};
