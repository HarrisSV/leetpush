class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int high = 0, low = 0, res = INT_MIN, k, len = 0;
        unordered_map<char, int> f;

        for (; high < s.size(); high++) {
            f[s[high]]++;

            k = high - low + 1;

            while (f.size() < k) {
                f[s[low]]--;
                if (f[s[low]] == 0)
                    f.erase(s[low]);
                low++;
                k = high - low + 1;
            }

            res = max(res, k);
        }

        if (res == INT_MIN)
            return 0;

        return res;
    }
};
