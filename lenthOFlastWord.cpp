class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int length = 0;

        while (s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

i starts at index 11 (space ' ').
Loop 1: s[11] == ' ' is true. i becomes 10.
Loop 1: s[10] == ' ' is false (it's 'd'). The loop terminates.
Loop 2: s[10] != ' ' is true (it's 'd'). Counting begins for "World".
Loop 2: Continues until i reaches index 5, which is a space.
Loop 2: s[5] != ' ' is false. The loop terminates.