class Solution {
   public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> s(allowed.begin(), allowed.end());
        int ans = 0;
        for (auto& w : words) {
            bool ok = true;
            for (char c : w)
                if (!s.count(c)) {
                    ok = false;
                    break;
                }
            if (ok) ans++;
        }
        return ans;
    }
};