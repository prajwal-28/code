#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int absentCount = 0;
        int consecutiveLates = 0;
        
        
        for (char c : s) {
            
            if (c == 'A') {
                absentCount++;
                if (absentCount >= 2) {
                    return false; 
                }
                consecutiveLates = 0; 
            } 
            // 3. Handle being Late ('L')
            else if (c == 'L') {
                consecutiveLates++;
                if (consecutiveLates >= 3) {
                    return false;
                }
            } 
            // 4. Handle being Present ('P')
            else {
                consecutiveLates = 0; 
            }
        }
        
        
        return true;
    }
};