class Solution {
public:
    bool validPalindrome(string s) {
        auto isP = [&](int i, int j) {
            while (i < j) if (s[i++] != s[j--]) return false;
            return true;
        };
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
            if (s[i] != s[j]) return isP(i + 1, j) || isP(i, j - 1);
        return true;
    }
};