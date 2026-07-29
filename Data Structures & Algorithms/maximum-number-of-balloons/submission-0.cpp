class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> f(26);

        for (char c : text)
            f[c-'a']++;

        return min({f['b'-'a'],
                    f['a'-'a'],
                    f['l'-'a']/2,
                    f['o'-'a']/2,
                    f['n'-'a']});
    }
};
