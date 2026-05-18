class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string, int>> sortedWords;

        for (int i = 0; i < strs.size(); ++i) {
            sortedWords.push_back({strs[i], i});
            sort(begin(sortedWords[i].first), end(sortedWords[i].first));
        }

        sort(begin(sortedWords), end(sortedWords));

        unordered_map<string, vector<int>> m;
        for (const auto& p : sortedWords) {
            m[p.first].push_back(p.second);
        }

        vector<vector<string>> result;
        for (const auto& p : m) {
            result.push_back(vector<string>());
            for (const auto& i : p.second) {
                result.back().push_back(strs[i]);
            }
        }

        return result;
    }
};










