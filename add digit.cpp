class Solution {
public:
    int addDigits(int num) {
        // Step 1: Keep running the process as long as the number has 2 or more digits
        while (num >= 10) {
            
            // Step 2: Create a bucket to hold the sum of the current digits
            int currentSum = 0;
            
            // Step 3: Chop up the number and add its digits together
            while (num > 0) {
                currentSum += num % 10; // Grab the last digit and add it
                num = num / 10;         // Throw away the last digit
            }
            
            // Step 4: Overwrite 'num' with the new sum before the outer loop restarts
            num = currentSum;
        }
        
        // Step 5: Once 'num' is less than 10, the outer loop breaks, and we return it!
        return num;
    }
};
