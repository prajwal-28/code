class Solution {
public:
    bool isUgly(int n) {
        // Step 1: Ugly numbers must be positive
        if (n <= 0) {
            return false;
        }
        
        // Step 2: Strip out all the 2s
        while (n % 2 == 0) {
            n = n / 2;
        }
        
        // Step 3: Strip out all the 3s
        while (n % 3 == 0) {
            n = n / 3;
        }
        
        // Step 4: Strip out all the 5s
        while (n % 5 == 0) {
            n = n / 5;
        }
        
        // Step 5: If the number is truly ugly, it should be reduced down to exactly 1
        return n == 1;
    }
};