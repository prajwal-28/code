class Solution {
public:
    int titleToNumber(string columnTitle) {
        long result = 0; 
        
        for (int i = 0; i < columnTitle.size(); i++) {
            
            result = result * 26;
            
            
            result += (columnTitle[i] - 'A' + 1);
        }
        
        return (int)result;
    }
};

