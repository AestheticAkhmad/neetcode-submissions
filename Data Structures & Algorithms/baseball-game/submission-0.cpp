class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for (const auto& op : operations) {
            switch(op[0]) {
                case '+': {
                    auto score1 = s.top(); s.pop();
                    auto score2 = s.top();
                    s.push(score1);
                    s.push(score1 + score2);
                    continue;
                }
                case 'D': {
                    s.push(s.top() * 2);
                    continue;
                }
                case 'C': {
                    s.pop();
                    continue;
                }
            }
            s.push(stoi(op));
        }

        int result{};
        while (!s.empty()) {
            result += s.top();
            s.pop();
        }

        return result;
    }
};