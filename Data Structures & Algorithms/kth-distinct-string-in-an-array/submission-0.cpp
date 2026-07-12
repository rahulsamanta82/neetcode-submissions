class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        for (int i = 0; i < arr.size(); i++) {
            bool flag = true;
            for (int j = 0; j < arr.size(); j++) {
                if (i == j) continue;

                if (arr[i] == arr[j]) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                k--;
                if (k == 0) {
                    return arr[i];
                }
            }
        }
        return "";
    }
};