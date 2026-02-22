class Solution {
private:
    
    int getNextNumber(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;
            totalSum += (digit * digit);
            n = n / 10;
        }
        return totalSum;
    }

public:
    bool isHappy(int n) {
        
        unordered_set<int> seenNumbers;
        
        
        while (n != 1 && seenNumbers.find(n) == seenNumbers.end()) {
            
            
            seenNumbers.insert(n);
            
            
            n = getNextNumber(n);
        }
        
        
        return n == 1;
    }
};