class Solution {
    struct Trie {
        int wordPref = 0;
        char letter = ' ';
        unordered_map<char, Trie*> m;
    };

    Trie* head = new Trie;

    void trieInsert(const string& s) {
        auto* iter = head;

        for (const auto& c : s) {
            if (!iter->m.contains(c)) {
                iter->m[c] = new Trie;
            }

            iter = iter->m[c];
            iter->wordPref += 1;
        }
    }

public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        for (const auto& s : strs) {
            if (s == "") return "";
            trieInsert(s);
        }

        int totalWords = strs.size();
        string longestComPref{};
        auto* iter = head;

        while (iter->m.size() == 1) {
            auto mIter = iter->m.begin();
            auto nextChar = mIter->first;
            auto nextIter = mIter->second;

            if (nextIter->wordPref == totalWords) {
                longestComPref.push_back(nextChar);
                iter = nextIter;
            } else {
                break;
            }

        }
        

        return longestComPref;
    }
};
















