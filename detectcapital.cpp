class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalCount = 0;
        int n = word.length();
        
        
        for (char c : word) {
            if (isupper(c)) {
                capitalCount++;
            }
        }
        
        
        if (capitalCount == n) {
            return true;
        }
        
        
        if (capitalCount == 0) {
            return true;
        }
        
        
        if (capitalCount == 1 && isupper(word[0])) {
            return true;
        }
        
        
        return false;
    }
};