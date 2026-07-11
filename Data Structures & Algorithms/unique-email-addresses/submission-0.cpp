class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;

        for (string email : emails) {
            int at = email.find('@');

            string local = email.substr(0, at);
            string domain = email.substr(at);

            if (local.find('+') != string::npos)
                local = local.substr(0, local.find('+'));

            local.erase(remove(local.begin(), local.end(), '.'), local.end());

            st.insert(local + domain);
        }

        return st.size();
    }
};