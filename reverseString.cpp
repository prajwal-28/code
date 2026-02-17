class Solution {
public:
    void recurssiveReverse(vector<char>& s, int i) {
        int n = s.size();
        if (i >= n / 2) {
            return;
        }

        int temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;

        recurssiveReverse(s, i + 1);
    }

    void reverseString(vector<char>& s) {
        recurssiveReverse(s, 0);
    }
};
