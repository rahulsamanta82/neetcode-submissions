class Solution {
public:
    int scoreOfString(string s) {
        int n =0;

        for(int i=1; i<s.size(); i++){
            n+= abs(s[i] - s[i - 1]);
        }

        return n;
    }
};