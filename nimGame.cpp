class Solution {
public:
    bool canWinNim(int n) {
        // If n is perfectly divisible by 4, you lose (return false).
        // If there is a remainder, you win! (return true).
        return n % 4 != 0;
    }
};