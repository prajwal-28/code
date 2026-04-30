class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 1) return false;
        if (num == 1) return true;

        long left = 1, right = num;

        while (left <= right) {
            long mid = left + (right - left) / 2;
            long squared = mid * mid;

            if (squared == num) {
                return true;
            } else if (squared < num) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }
};